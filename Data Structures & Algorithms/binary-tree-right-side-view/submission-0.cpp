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

    void rightView(TreeNode* root, int level, vector<int>& vec){
        if(root==nullptr){
            return;
        }

        if(level==vec.size()){
            vec.push_back(root->val);
        }

        rightView(root->right,level+1,vec);
        rightView(root->left,level+1,vec);

    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        int level=0;

        rightView(root,level,vec);

        return vec;

        

    }
};
