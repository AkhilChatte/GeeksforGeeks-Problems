class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>s;
        vector<long long>ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=arr[i])
                s.pop();
            if(i<n)
            {
                if(!s.empty())
                    ans[i]=s.top();
                else 
                    ans[i]=-1;
            }
            s.push(arr[i]);
        }
        return ans;
    }
};