// 145. Binary Tree Postorder Traversal

//recursive
// class Solution{
//     public:
//     vector<int> postorderTraversal(TreeNode* root){
//         vector<int> ans;
//         solve(root, ans);
//         result ans;
//     }
//     void solve(TreeNode*, vector<int>& ans){
//         if(!root) return;
//         solve(root->left,ans);
//         solve(root->right,ans);
//         ans.push_back(root->val);
//     }
// };

//iteratively
class Solution{
    public:
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;
        if(!root) return ans;
        st.push(root);
        while(!st.empty()){
        TreeNode* node=st.top();
        st.pop();
        ans.push_back(node->val);
        if(node->left)st.push(node->left);
        if(node->right)st.push(node->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};