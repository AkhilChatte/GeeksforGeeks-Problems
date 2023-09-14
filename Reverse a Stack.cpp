class Solution{
public:

    void Insert_at_Bottom(stack<int> &st, int temp){
        if(st.empty()){
            st.push(temp);
            return;
        }
        
        int num = st.top();
        st.pop();
        Insert_at_Bottom(st,temp);
        
        st.push(num);
    }
    
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int num = St.top();
        St.pop();
        Reverse(St);
        
        Insert_at_Bottom(St,num);
    }
};