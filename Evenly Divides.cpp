class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        vector <int> store;
        int original = n;
        int lastdigit;
        while( n > 0){
            lastdigit = n % 10;
            store.push_back(lastdigit);
            n = n / 10;
        }
        int cnt = 0;
        for(int i = 0 ; i < store.size() ; i++){
            if (store[i] != 0 && original % store[i] == 0)
        {
            cnt++;
            
        }
        }
        return cnt;
        
    }
};