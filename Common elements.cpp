
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            unordered_map<int,int>m1,m2,m3;
            for(int i=0;i<n1;i++){
                 m1[A[i]]++;
            }
             for(int i=0;i<n2;i++){
                 m2[B[i]]++;
            }
             for(int i=0;i<n3;i++){
                 m3[C[i]]++;
                 if(m1[C[i]] && m2[C[i]] && m3[C[i]]){
                     ans.push_back(C[i]);
                     m1[C[i]]=0;
                 }
            }
            return ans;
        }

};