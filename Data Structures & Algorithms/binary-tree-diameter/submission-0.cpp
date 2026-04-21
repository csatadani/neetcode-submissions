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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        helper(root, diameter);
        return diameter;
        
    }
    int helper(TreeNode* root, int& dia){
        if(!root){
            return 0;
        }

        int rside = helper(root->right, dia);
        int lside = helper(root->left, dia);
        dia = max(dia, rside + lside);
        return max(rside, lside) + 1;
    }
};
