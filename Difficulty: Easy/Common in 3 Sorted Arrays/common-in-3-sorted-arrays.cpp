class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        vector <int> ans;
        map <int , int> m1;
        map <int , int> m2;
        map <int , int> m3;
        for(auto it : a){
            m1[it] = 1;
        }
        for(auto it : b){
            m2[it] = 1;
        }
        for(auto it : c){
            m3[it]  = 1;
        }
        for(auto it : m2){
            if(m1[it.first] && m3[it.first]){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};