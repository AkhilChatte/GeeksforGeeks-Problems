class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        // code here
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        return ans;
    }

    string stringForm(int a, int b, int c) {
        // code here
        string ans = "";
        ans += to_string(a)+to_string(b)+to_string(c);
        return ans;
    }
};