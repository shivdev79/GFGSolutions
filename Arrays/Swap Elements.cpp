/*Function to swap array elements
 * arr : array input
 */
class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        int n = arr.size() - 1;
        for(int i = 0 ; i + 2 < arr.size() ; i++){
            swap(arr[i] , arr[i+2]);
        }
        
    }
};