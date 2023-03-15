// 1008. Construct Binary Search Tree from Preorder Traversal

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return buildTree(preorder, 0, preorder.size() - 1);
    }
    TreeNode* buildTree(vector<int>& preorder, int start, int end) {
        if (start > end)return nullptr;
        TreeNode* root = new TreeNode(preorder[start]);
        int i;
        for (i = start + 1; i <= end; i++) {
            if (preorder[i] > root->val)break;
        }
        root->left = buildTree(preorder, start + 1, i - 1);
        root->right = buildTree(preorder, i, end);
        return root;
    }   
};