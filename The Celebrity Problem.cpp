class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int ans = INT_MIN;
        stack<int> st;
        for(int i = 0; i<n; i++)
            st.push(i);
        
        while(st.size() > 1)
        {
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(M[a][b] == 1) // If A Knows B Then A Not Celeb
                st.push(b);  // B Should Go In
            else 
                st.push(a); // Else A Should Go
        }
        
        int candidate = st.top();
        st.pop();
        
        int zero = 0;
        
        // Check Same Row and Increase zero Count;
        for(int i = 0; i<n; i++)
        {
            if(M[candidate][i] == 0) zero++;
        }
        
        // Check Same Col Increase 1 Count
        int one = 0;
        for(int j = 0; j<n; j++)
        {
            if(M[j][candidate] == 1) one ++;
        }
        
        if(zero == n && one == n-1)
            ans = candidate;
        
        if(ans == INT_MIN) 
            return -1;
            
        return ans;
    }
};