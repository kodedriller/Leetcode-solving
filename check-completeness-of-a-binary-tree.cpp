//958. Check Completeness of a Binary Tree

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool isNullEncountered = false;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr == nullptr) {
                isNullEncountered = true;
            } else {
                if (isNullEncountered) {
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};