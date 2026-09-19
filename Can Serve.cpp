class Solution {
  public:
    bool canServe(vector<int> &arr) {
        int n = arr.size();
        int five = 0 ;
        int ten = 0;
        int twenty = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 5){
                five = five +1;
            }
            else if(arr[i] == 10){
                if(five){
                ten  = ten + 1;
                five = five - 1;
                }
                else{
                    return false;
                }
            }
            else{
                if(ten && five){
                    ten = ten - 1;
                    five = five - 1;
                }
                else if( five >= 3){
                    five = five - 3;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
    }
};