
class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) 
    {
        int n = a.size();
        for(int i = 0 ; i < n ; i++){
                if(a[i] != b[i])
                {
                    return i;
                }
        }
        return a.size() - 1;
    }
};
