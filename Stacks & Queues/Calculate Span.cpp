class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<pair<int , int>> st;
        vector <int> ans;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(st.size() == 0){
                ans.push_back(-1);
            }
            else if(st.size() > 0 && st.top().first > arr[i]){
                ans.push_back(st.top().second);
            }
            else if(st.size() > 0 && st.top().first <= arr[i]){
                while(st.size() > 0 && st.top().first <= arr[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i] , i});
        }
        vector <int> sum(n);
        for(int i = 0 ; i < n ; i++){
            sum[i] = i - ans[i];
        }
        return sum;
    }
};