// 129. Sum Root to Leaf Numbers

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return(root,0);
    }
    int dfs(TreeNode* rppt, int sum){
        if(root==NULL) return 0;
        sum=sum*10 +root->val;
        if(root->left==NULL &&root->right==NULL) return sum;
        return dfs(root->left)
    }
};