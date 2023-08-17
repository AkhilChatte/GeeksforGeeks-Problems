class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int maxa = *max_element(a, a+n);
        int maxb = *max_element(b, b+m);
        int largestEle = max(maxa, maxb);
        vector<int> flag(largestEle+1, false);
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(flag[a[i]] == false){
                count++;
                flag[a[i]] = true;
            }
        }
        
        for(int i=0; i<m; i++){
            if(flag[b[i]] == false){
                count++;
                flag[b[i]] = true;
            }
        }
        return count;
    }
};