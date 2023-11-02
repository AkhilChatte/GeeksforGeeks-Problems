class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int,int>mp;
        vector<int>x;
        for(int i=1;i<=n;i++)
        {
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]>2)
            x.push_back(arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]<2)
            x.push_back(i);
        }
        return x;
    }
};