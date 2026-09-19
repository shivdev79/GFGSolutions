class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        // length of range
        int len = r - l + 1;

        // mask with len 1's: e.g. len=3 → 000...111
        int mask = (1 << len) - 1;

        // shift mask to start from l: e.g. l=2, r=4 → 000...11100
        mask = mask << (l - 1);

        // toggle bits using XOR
        return n ^ mask;
    }
};