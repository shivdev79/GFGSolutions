class Solution {
  public:

    void bst(int arr[] , int &index , int lower , int upper , int N){
        if(index == N || arr[index] < lower || arr[index] > upper){
            return;
        }

        int root = arr[index++];

        bst(arr, index , lower , root , N);
        bst(arr, index , root , upper , N);
    }

    int canRepresentBST(int arr[], int N) {
        int index = 0;

        bst(arr, index , INT_MIN , INT_MAX , N);

        return index == N;
    }
};