class Solution {
  public:
    string frequencySort(string &s) {
        int n = s.size();
        string ans = "";
        map <char , int> mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[s[i]]++;
        }
        priority_queue<pair<int , char>> pq;
        for( auto it : mpp){
            pq.push({it.second , it.first});
        }
        while(!pq.empty()){
            int n = pq.top().first;
            while( n--){
                ans += pq.top().second;
            }
            pq.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};