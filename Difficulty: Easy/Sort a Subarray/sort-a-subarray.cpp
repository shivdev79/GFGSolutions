class Solution {
  public:
    void partSort(vector<int> &arr, int l, int r) {
        sort(arr.begin() + l, arr.begin() + r + 1);
    }
};