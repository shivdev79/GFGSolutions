class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B)
    {
        vector <int> ans;
        sort(arr , arr + n);
        int x = -1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==A){
                x=i;
            }
        }
        int y = -1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==B){
                y = i;
            }
        }
        if(x == -1 || y == -1){
            return false;
        }
        for(int i = x  ; i <= y ; i++)
        {
            if(arr[i]==A){
               ans.push_back(arr[i]);
               A++;
            }
        }
        int z = ans.size();
        int s = B - ans[0] + 1;
        if(z==s){
            return true;
        }
        return false;
            
        
    }
};