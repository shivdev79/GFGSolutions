class Solution {
  public:
    int sumUnderModulo(int a, int b, int M) {
        int sum = (a + b) % M;
        return sum;
    }
};