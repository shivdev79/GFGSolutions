class Solution {
public:
    vector<int> twoRepeated(vector<int>& arr) {
        map<int, int> mpp;
        vector<int> ans;

        for(auto it : arr) {
            mpp[it]++;

            if(mpp[it] == 2)
                ans.push_back(it);
        }

        return ans;
    }
};