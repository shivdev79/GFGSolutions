class Solution {
  public:
    int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
        priority_queue<int> p1;
        priority_queue<int> p2;
        int n = arr.size();
        for(int i = 0 ; i < k1 ; i++){
            p1.push(arr[i]);
        }
        for(int i = 0 ; i < k2 -1 ; i++){
            p2.push(arr[i]);
        }
        for(int i = k1 ; i < n; i++){
            if(arr[i] <p1.top()){
                p1.pop();
                p1.push(arr[i]);
            }
        }
        for(int i = k2 -1 ; i < n ;i++){
            if(arr[i] < p2.top()){
                p2.pop();
                p2.push(arr[i]);
            }
        }
        int sum1 = 0;
        while(!p1.empty()){
            sum1 = sum1 + p1.top();
            p1.pop();
        }
        int sum2 = 0;
        while(!p2.empty()){
            sum2 = sum2 + p2.top();
            p2.pop();
        }
        int ans = sum2 - sum1;
        return ans;
    }
};