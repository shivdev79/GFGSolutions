class Solution {
  public:
    int setKthBit(int n, int k) {
        int r = 1 << k;
        int x = n | r;
        return x;
    }
};