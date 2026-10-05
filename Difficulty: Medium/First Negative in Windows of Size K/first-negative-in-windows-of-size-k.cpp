class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0;
        int j = 0 ;
        list <int> l;
        vector <int> v;
        while( j < n){
            if(arr[j] < 0){
                l.push_back(arr[j]);
            }
            if(j -  i+ 1 < k ){
                j = j + 1;
            }
            else if( j - i + 1 == k){
                if(l.size() == 0){
                    v.push_back(0);
                }
                else{
                    v.push_back(l.front());
                    if(arr[i] == l.front()){
                        l.pop_front();
                    }
                }
                i = i + 1;
                j = j + 1;
            }
        }
        return v;
    }
};