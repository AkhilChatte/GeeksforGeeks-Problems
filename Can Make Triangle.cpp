//User function Template for C++
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> A, int N){
        // code here
        vector<int>ans;
        for(int i=0;i<N-2;i++){
            int a=A[i];
            int b=A[i+1];
            int c=A[i+2];
            if(a+b>c && a+c>b && b+c>a){
                ans.push_back(1);
            }
            else
            ans.push_back(0);
        }
        return ans;
    }
}; 