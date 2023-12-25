// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        // Write your code here
        if (!root) 
            return 0;
        
        int l = 0, r = 0;
        Node *tempr = root, *templ = root;
        while (templ){
            l++;
            templ=templ->left;
        }
        while (tempr){
            r++;
            tempr=tempr->right;
        }
        if (l == r) 
            return pow(2, l) - 1; // complete binary tree ki hieght 2^level-1 
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};