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

    bool comparison(TreeNode* root,TreeNode* subRoot){
        bool leftside=false,rightside=false;
        if(root==nullptr && subRoot==nullptr){

            return true;
        }
        else if(!root || !subRoot){return false;} 
        else{
            if(subRoot->val==root->val){
                leftside= comparison(root->left,subRoot->left);

              
                    rightside= comparison(root->right,subRoot->right);
            }
            else{
                return false;
            }
            
        }
        return (leftside==true && rightside==true);
    }

    bool check(TreeNode* root, TreeNode* subRoot){
        if(root!=nullptr && subRoot!=nullptr){
            if(root->val==subRoot->val){
                if(comparison(root,subRoot)){
                    return true;
                }
            }
        }

        if(root->left!=nullptr){

        if(check(root->left,subRoot)) return true;
        }
        if(root->right!=nullptr){

        if(check(root->right,subRoot)) return true;
        }

        return false;


    }


    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return check(root,subRoot);
    }
};
