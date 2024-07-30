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
    int maxDepth(TreeNode* root) {
        // Given:
        // given the root of a binary tree

        // goal:
        // return the binary trees max depth

        // return:
        // return integer number that represents the max depth of the tree

        //logic:
        // if tree is empty return 0
        // find max depth of left side and right side
        // compare and return larger max 
        // max = max(left, right) +1 (add 1 because top node isnt included in finding left and right maxes)

        if (root == NULL) return 0;

        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);

        return max(maxLeft, maxRight) + 1;

    }
};