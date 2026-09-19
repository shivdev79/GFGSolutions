class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // elements ko sort rakho
        vector<int> current;
        vector<vector<int>> google;
        int n = arr.size();
        subsequences(0, arr, current, google, n);
        sort(google.begin(), google.end()); // final output ko lexicographical sort
        return google;
    }

    void subsequences(int index, vector<int>& arr, vector<int>& current, vector<vector<int>>& google, int n) {
        if (index >= n) {
            google.push_back(current);
            return;
        }
        current.push_back(arr[index]);
        subsequences(index + 1, arr, current, google, n);
        current.pop_back();
        subsequences(index + 1, arr, current, google, n);
    }
};