
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        set <int> s1;
        
        int n = a.size();
        int m = b.size();
        for(int i =0 ; i < n ; i++){
            s1.insert(a[i]);
        }
        for(int i = 0 ; i < m ; i++){
            s1.insert(b[i]);
        }
        vector <int> ans(s1.begin(),s1.end());
        return ans;
    }
};
