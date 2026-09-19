class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        int sum1 = 0;
        for(int i = 0 ; i < car.size() ; i++){
            if(date % 2 == 0){
                if(car[i] % 2 != 0){
                    sum1 = sum1 + fine[i];
                }
            }
            else{
                if(car[i] % 2 == 0){
                    sum1 = sum1 + fine[i];
                }
            }
        }
        return sum1;
        
    }
};