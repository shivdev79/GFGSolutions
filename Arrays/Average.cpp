
class Solution {
    public String average(int arr[]) {
         int m = arr.length;
        int sum =0;
        for(int i=0;i<m;i++){
            sum = sum+arr[i];
            
        }
        double avg = (double)sum/arr.length;
        return String.format("%.2f",avg);
        
    }
}