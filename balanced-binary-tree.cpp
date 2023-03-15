// 110. Balanced Binary Tree

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1) return false;
        return isBalanced(root->left) &&isBalanced(root->right);
    }
    int height(TreeNode* root){
        if(root==NULL)return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
};