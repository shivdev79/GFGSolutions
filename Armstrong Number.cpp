// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int lastdigit;
        int orig = n;
        int sum = 0;
        while(n > 0){
            lastdigit = n % 10;
            sum = sum + (lastdigit * lastdigit * lastdigit);
            n = n / 10;
        }
        if(sum == orig){
            return true;
        }
        else{
            return false;
        }
    }
};