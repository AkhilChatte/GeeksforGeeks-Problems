//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        int n = q.size();
        vector<int> temp;
        for(int i=0; i<n/2; i++){
            temp.push_back(q.front());
            q.pop();
        }
        for(int i=0; i<n/2; i++){
            ans.push_back(temp[i]);
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};