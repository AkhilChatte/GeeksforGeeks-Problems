class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
        int sum1 =0;
        for(int i=0;i<=n;i++){
            sum = sum +i;
        }
        for(int i=0;i<array.size();i++){
            sum1 = sum1 + array[i];
        }
        return abs(sum - sum1);
    }
};