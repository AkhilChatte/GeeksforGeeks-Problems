class Solution {
  public:
    bool isPal(string str, int s, int e){
        while(s < e){
            if(str[s] != str[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    string longestPalin (string S) {
        // code here
        if(S.size()==0 || S.size()==1){
            return S;
        }
        string ans = S.substr(0, 1);
        for(int i=0; i<S.size(); i++){
            for(int j=S.size()-1; j>i; j--){
                if((j-i)+1 <= ans.size()){
                    break;
                }
                if(S[i] == S[j]){
                    if(isPal(S, i, j)){
                        if((j-i)+1 > ans.size()){
                            ans = S.substr(i, j-i+1);
                        }
                    }
                }
            }
        }
        return ans;
    }
};