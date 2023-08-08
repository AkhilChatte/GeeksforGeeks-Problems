class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>ans;
        for(int i=1;i<n+1;i++){   //indexing starts from 1
            if(arr[i-1] == i){
                ans.push_back(arr[i-1]);
            }
        }
        return ans;
	}
};