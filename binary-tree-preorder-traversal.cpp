// 144. Binary Tree Preorder Traversal

class Solution {
    public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> result;
        stack<TreeNode*> st;
        if(root!=nullptr){
            st.push(root);
        }
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            result.push_back(node->val);
            if(node->right!=nullptr){
                st.push(node->right);
            }
            if(node->left!=nullptr){
                st.push(node->left);
            }
        }
        return result;
    }
};