class Solution {
  public:
    long long factorial(int n) {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    long long nCr(int n, int r) {
        if (r > n) return 0;
        if (r > n - r) r = n - r;  // use symmetry property nCr = nC(n-r)

        long long result = 1;
        for (int i = 1; i <= r; i++) {
            result = result * (n - r + i) / i;
        }
        return result;
    }
};