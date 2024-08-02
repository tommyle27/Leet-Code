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

    // function to be used recursively to compare and check left and right nodes
    bool checkLeftRight(TreeNode* rootLeft, TreeNode* rootRight)
    {
        // compare both are null
        if (rootLeft == NULL && rootRight == NULL) return true;
        // check if one and only one is null
        else if (rootLeft == NULL || rootRight == NULL) return false;
        // check if values are equal
        else if (rootLeft->val != rootRight->val) return false;

        // return boolean result of comparing left subtrees left child with right subtrees right child
        // AND comparing left subtrees right child with right subtrees left child
        return checkLeftRight(rootLeft->left, rootRight->right) && checkLeftRight(rootLeft->right, rootRight->left);

    }


    bool isSymmetric(TreeNode* root) {
        // given:
        // given the root of a binary tree

        // goal:
        // check if the tree is mirrored along the center of itself
        // if true return true otherwise false

        // return:
        // boolean value

        // logic:
        // compare left and right childs between right and left side of the tree
        // take a recursive approach

        // tree is empty, return true
        if (!root) return true;

        return checkLeftRight(root->left, root->right);
    }
};