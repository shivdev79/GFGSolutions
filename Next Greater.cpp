class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        vector <int> ans;
        stack <int> st;
        int n = arr.size();
        for(int i = 2*n - 1 ; i >= 0 ; i--){
            int index = i % n;
            if(st.size() == 0){
                ans.push_back(-1);
            }
            else if(st.size() > 0 && st.top() > arr[index]){
                ans.push_back(st.top());
            }
            else if(st.size() > 0 && st.top() <= arr[index]){
                while(st.size() > 0 && st.top() <= arr[index]){
                    st.pop();
                }
                if(st.size() == 0){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top());
                }
                
            }
            st.push(arr[index]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};