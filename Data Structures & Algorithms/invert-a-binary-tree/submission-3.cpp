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

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* curr= root;
        if(root==NULL){
            return root;
        }
        stack<TreeNode*> st;
        st.push(curr);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            if(curr->left!=nullptr && curr->right!=nullptr){
                swap(curr->left,curr->right);
                st.push(curr->left);
                st.push(curr->right);
            }
            else if(curr->left==nullptr && curr->right){
                st.push(curr->right);
                curr->left=NULL;
                swap(curr->left,curr->right);
            }
            else if(curr->right==nullptr && curr->left){
                st.push(curr->left);
                curr->right=NULL;
                swap(curr->left,curr->right);
            }
            
        }
        return root;
    }
};
