// User function Template for C++
#include<algorithm>
class Solution {
  public:
    int findSum(int A[], int N) {
        sort(A , A + N);
        int x = A[0];
        int x1 = A[N-1];
        int sum = x + x1;
        return sum;
    }
};