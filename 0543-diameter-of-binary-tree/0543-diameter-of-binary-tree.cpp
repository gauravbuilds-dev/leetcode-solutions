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

    int ans;

    int helper (TreeNode* root){

        if (root == nullptr){

            return 0;
        }

        int left = helper(root -> left);
        int right = helper (root -> right);

        int ans1 = left + right ;

        ans = max(ans , ans1);

        return 1 + max(left , right);
    }
       
    int diameterOfBinaryTree(TreeNode* root) {
        
        if (root == nullptr) return 0;
        
        ans = max(ans, helper(root) - 1 );

        return ans;

    }
};