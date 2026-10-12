class Solution {
  public:
    void enqueue(queue<int> &q, int k) {
        q.push(k);
    }

    int findFrequency(queue<int> &q, int k) {
        queue <int> q1 = q;
        int count = 0;
        while(!q1.empty()){
            if(q1.front() == k){
                count = count + 1;
            }
            q1.pop();
        }
        return count;
    }
    
};