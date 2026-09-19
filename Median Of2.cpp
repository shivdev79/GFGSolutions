class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector <int> ans;
        for(int i =  0 ; i < a.size() ; i++){
            ans.push_back(a[i]);
        }
        for(int j = 0 ; j < b.size(); j++){
            ans.push_back(b[j]);
        }
        sort(ans.begin(),ans.end());
        int size = ans.size();
        int mid = size/2;
        if(size %2 != 0){
            return ans[mid];
        }
        else{
            return (ans[mid] + ans[mid-1])/2.0;
        }
    }
};