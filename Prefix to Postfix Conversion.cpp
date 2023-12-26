// User function Template for C++

class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string> st;
        for(int i=pre_exp.size()-1; i>=0; i--){
            if(isalpha(pre_exp[i])){
                string curr(1,pre_exp[i]);
                st.push(curr);
            }
            else{
                string operand_1 = st.top(); 
                st.pop();
                string operand_2 = st.top(); 
                st.pop();
                st.push(operand_1 + operand_2 + pre_exp[i]);
            }
        }  
      
        return st.top();
    }
};