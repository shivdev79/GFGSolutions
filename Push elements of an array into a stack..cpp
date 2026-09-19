class Solution {
  public:

    // Push elements of an array into a stack.
    stack<int> push(vector<int> &arr) {
        stack <int> st;
        int n =arr.size();
        for(int i = 0 ; i < n ; i++){
            st.push(arr[i]);
        }
        return st;
    }

    // Print elements of a stack and pop them.
    void printAndPop(stack<int> s) {
        while(!s.empty()){
            cout << s.top() <<" ";
            s.pop();
        }
    }
};