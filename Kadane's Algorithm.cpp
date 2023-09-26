class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // Your code here
        long long int sum = 0;
        long long int Max = arr[0];
        for(int i=0; i<n; i++){
            sum = sum+arr[i];
            Max = max(Max, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        
        return Max;
        // Your code here
        
    }
};