class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        queue <int> q1;
        vector <int> ans;
        while(!q.empty()){
            int z = q.front();
            ans.push_back(z);
            q.pop();
        }
        reverse(ans.begin() , ans.end());
        for(int i = 0 ; i < ans.size() ; i++){
            q1.push(ans[i]);
        }
        q = q1;
        
    }
};