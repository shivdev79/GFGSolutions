class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        vector <int> ans;
        stack <int> st;
        int n = arr.size();
        for(int i = 0 ; i < n  ; i++){
            if(st.empty()){
                ans.push_back(-1);
            }
            else if(st.size() > 0 && st.top() > arr[i]){
                ans.push_back(st.top());
            }
            else if(st.size() > 0 && st.top() <= arr[i])
            {
                while(st.size() > 0 && st.top() <= arr[i]){
                    st.pop();
                    
                }
                if(st.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        return ans;
    }
};