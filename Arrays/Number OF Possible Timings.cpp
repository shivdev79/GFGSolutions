class Solution {
  public:
    int numberOfPossibleTimings(string S){
    int nums[10] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    return nums[S[0] - 48] * nums[S[1] - 48];
}
};