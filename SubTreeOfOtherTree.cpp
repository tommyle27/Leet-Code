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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // given:
        // given the roots of two binary trees
        // one "root" and one "subRoot"

        // goal:
        // determine if "root" contains a subroot consisting
        // of the same structure and values as "subRoot"

        // return:
        // boolean result

        // logic:
        // Use Depth-First-Search
        // traverse through the root tree
        // compare left subtrees to "subTree"
        // compare right subtrees to "subTree"

        // BASE CASE:
        if (root == NULL) return false;

        if (isSame(root, subRoot))
        {
            return true;
        }
        else {
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        }


    }

    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL && subRoot == NULL) return true;
        if (root == NULL || subRoot == NULL) return false;

        if (root->val == subRoot->val)
        {
            return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
        }
        else {
            return false;
        }

    }

};