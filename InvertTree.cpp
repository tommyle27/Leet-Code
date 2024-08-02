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
        // given:
        // given a root of a binary tree

        // goal:
        // invert the binary tree
        // left node becomes right node and right does left

        // return:
        // return root

        // logic:
        // swap left and right child nodes
        // check if current root node is null
        // if not null swap left and right child nodes
        // recursively swap left side and right side

        if (root == NULL) return NULL;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};