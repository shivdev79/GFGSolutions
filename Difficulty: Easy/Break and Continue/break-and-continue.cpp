class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;

        for(int i = 1; i <= n; i++){
            if(i % 7 == 0){
                break;
            }

            if(i % 3 == 0){
                continue;
            }

            ans.push_back(i);
        }

        return ans;
    }
};