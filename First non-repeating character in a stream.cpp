class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans = "";
		    int n = A.size();
		    unordered_map<char, int> mp;
		    queue<int> q;
		    for(int i=0; i<n; i++){
		        mp[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty()){
		            if(mp[q.front()] > 1){
		                q.pop();
		            }
		            else{
		                ans += q.front();
		                break;
		            }
		        }
		        if(q.empty())
		            ans += '#';
		    }
		    return ans;
		}

};