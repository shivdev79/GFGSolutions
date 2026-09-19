class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        
        char arr1[128] = {0};
        char arr2[128] = {0};
        int len =  s1.size();
        for(int i = 0 ; i < len ; i++)
        {
            if(arr1[s1[i]] != arr2[s2[i]]){
                return false;
            }
            arr1[s1[i]] =  i + 1;
            arr2[s2[i]] = i + 1;
        }
        return true;
        
        
        
    }
};