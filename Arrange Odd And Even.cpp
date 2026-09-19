class Solution {

  public:
    vector<int> arrangeOddAndEven(vector<int>& arr) {
        vector <int> evens;
        vector <int> odds;
        vector <int> finals;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] % 2 == 0){
                evens.push_back(arr[i]);
            }
            else{
                odds.push_back(arr[i]);
            }
        }
        int e = 0;
        int o = 0;
        for(int i = 0 ; i< arr.size() ; i++){
            if(i % 2 == 0 && e < evens.size()){
                finals.push_back(evens[e++]);
                
            }
            else if( o < odds.size()){
                finals.push_back(odds[o++]);
            }
        }
        return finals;
    }
};