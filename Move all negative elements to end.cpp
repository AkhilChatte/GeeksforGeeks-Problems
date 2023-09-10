class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        // This solution gives TLE
        /*int e = n-1;
        int s = n-1;
        while(s >= 0){
            if(arr[s] < 0){
                for(int i=s; i<e; i++){
                    swap(arr[i], arr[i+1]);
                }
                e--;
            }
            s--;
        }*/
        
        int temp[n];
        int start = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] >= 0){
                temp[start++] = arr[i];
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0){
                temp[start++] = arr[i];
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            arr[i] = temp[i];
        }
    }
};