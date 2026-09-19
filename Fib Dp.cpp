class Solution {
  public:
  int fibDP( int n , vector <int> &f){
        if(n <= 1){
            return n;
        }
        if(f[n] != -1){
            return f[n];
        }
        return f[n] = fibDP(n-1 , f) + fibDP(n-2 , f);
    }
    int nthFibonacci(int n) {
        vector <int> ans(n+1 , -1);
        int z = fibDP(n , ans);
        return z;
    }
    
};