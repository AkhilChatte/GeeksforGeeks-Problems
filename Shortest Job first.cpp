// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(), bt.end());
        int n = bt.size();
        long long totalWt = 0;
        long long temp = 0;
        for(int i=0; i<n-1; i++){
            temp += bt[i];
            totalWt += temp;
        }
        return totalWt/n;
    }
};