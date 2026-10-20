class Solution {
  public:
    int maxProductSum(vector<int> &a, vector<int> &b) {\
    int n = a.size();
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        int result = 0;
        for(int i = 0 ; i <  n ; i++){
            result =  result + a[i]*b[i];
        }
        return result;
    }
};