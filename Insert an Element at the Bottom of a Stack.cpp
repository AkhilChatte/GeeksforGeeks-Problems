class Solution{
public:
    stack<int> insertAtBottom(stack<int> &St,int X){
        if(St.empty()){
            St.push(X);
            return St;
        }
        
        int num = St.top();
        St.pop();
        
        insertAtBottom(St, X);
        St.push(num);
        return St;
    }
};