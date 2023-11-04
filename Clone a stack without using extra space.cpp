//User function Template for C++

class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        int size = st.size(), low;
        while (--size>=0) {
            for (int i=0; i<size; i++) {
                cloned.push(st.top());
                st.pop();
            }
            low = st.top();
            st.pop();
            for (int i=0; i<size; i++) {
                st.push(cloned.top());
                cloned.pop();
            }
            cloned.push(low);
        }
    }
};