class Solution
{
    public:
    //Function to delete middle element of a stack.
    int count = 0;
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        if(count == sizeOfStack/2){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        
        count++;
        deleteMid(s, sizeOfStack);
        s.push(num);
    }
};