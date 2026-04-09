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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root==nullptr) return vec;
        queue<TreeNode*> q;

        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> v;
            for(int j=0;j<size;j++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=nullptr){
                    q.push(temp->left);
                }
                if(temp->right!=nullptr){
                    q.push(temp->right);
                }
                v.push_back(temp->val);
            }

            vec.push_back(v);
        }

        return vec;
    }
};
