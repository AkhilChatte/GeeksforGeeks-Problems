class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        vector<int> visited (n, 0);
        
        for(int i=0; i<n; i++){
            visited[arr[i]]++; 
        }
        for(int i=0; i<n; i++){
            if(visited[i] >= 2){
                ans.push_back(i);
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
        }
        return ans;
    }
};