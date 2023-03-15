// 94. Binary Tree Inorder Traversal


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// recursive
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> res;
//         inorder(root, res);
//         return res;
        
//     }
// private:
//     void inorder(TreeNode* root, vector<int>& res){
//         if(root==nullptr) return ;
//         inorder(root->left, res);
//         res.push_back(root->val);
//         inorder(root->right,res);
//     }
// };

//iterative
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* curr=root;
        while(curr!=NULL || !s.empty()){
            while(curr!=nullptr){
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            result.push_back(curr->val);
            curr=curr->right;

        }
        return result;
    }
};