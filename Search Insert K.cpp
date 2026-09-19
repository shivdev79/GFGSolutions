class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int start = 0;
        int end = N -1;
        while(start <= end){
            int mid = (start + end)/2;
            if(Arr[mid]==k){
                return mid;
            }
            else if(Arr[mid] < k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }
};