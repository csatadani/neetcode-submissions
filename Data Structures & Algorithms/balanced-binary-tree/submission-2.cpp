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
    bool isBalanced(TreeNode* root) {
        bool isbalanced = true;
        int mdepth = helper(root, isbalanced);
        return isbalanced;
        
    }

    int helper(TreeNode* root, bool& isb){
        if(!root){
            return 0;
        }

        int rside = helper(root->right, isb);
        int lside = helper(root->left, isb);
        int diff = 0;
        if(rside>lside){
            diff = rside - lside;
        }
        else{
            diff = lside - rside;
        }
        if(diff>1){
            isb = false;
            return max(lside, rside) + 1;
        }

        return max(lside, rside) + 1;
    }
};
