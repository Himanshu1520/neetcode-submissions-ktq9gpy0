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

    void find(TreeNode* root,int& count,int maxi){

        
        if(root==nullptr){
            return;
        }

        if(root->val >= maxi){
            maxi=root->val;
            count++;
        }

        find(root->left,count,maxi);
        find(root->right,count,maxi);

    }

    int goodNodes(TreeNode* root) {

        if(!root){
            return 0;
        }

        int count=0;
        int maxi=INT_MIN;
        find(root,count,maxi);

        return count;

    }
};
