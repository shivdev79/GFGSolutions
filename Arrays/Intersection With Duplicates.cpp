
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        int i = 0;
        int j = 0 ;
        int n = a.size();
        int m = b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        set <int> s1;
        while( i < n && j < m)
        {
            if(a[i]==b[j]){
                s1.insert(b[j]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        vector <int> ans(s1.begin(),s1.end());
        return ans;
    }
};
