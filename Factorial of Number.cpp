// User function Template for C++

class Solution {
  public:
  long long factorial(int n) {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
    int isPerfect(int N) {
        int orig = N ;
        int lastdigit;
        int store = 0;
        while( N > 0){
            lastdigit = N  % 10;
            store =  store + factorial(lastdigit);
            N = N / 10;
        }
        if(store == orig){
            return true;
        }
        else{
            return false;
        }
        
    }
};