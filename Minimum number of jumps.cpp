class Solution{
  public:
    int minJumps(int arr[], int n){
       int farthest = 0;
       int jumps = 0;
       int current = 0;
       
       for(int i = 0 ; i < n-1 ; i++){
            farthest = max(farthest,arr[i]+i);
            
            if(i == current){
                current = farthest;
                jumps++;
            }
            
            if(current >= n-1){
                return jumps;
            }
       }
       return -1;
    }
};