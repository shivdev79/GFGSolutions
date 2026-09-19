class Solution {
  public:
    int countBitsFlip(int a, int b) {
        int store = a^b;
        int x = countsetbits(store);
        return x ;
    }
    int countsetbits(int n){
        int cnt = 0;
        while(n > 1){
            if(n % 2 == 1){
                cnt +=1;
            }
            n = n /2;
        }
        if(n == 1){
            cnt +=1;
        }
        return cnt;
        
        
    }
};