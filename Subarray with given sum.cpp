class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s == 0)
            return {-1};
        
        long long sum = 0;
        int start = 0;
        int end = 0;
        while(end < n){
            if(sum < s){
                sum = sum + arr[end];
            }
            while(sum > s){
                sum = sum - arr[start];
                start++;
            }
            if(sum == s){
                return {start+1, end+1};
            }
            end++;
        }
        return {-1};
    }
};