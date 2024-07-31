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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // given:
        // given the roots of two binary trees, p and q

        // goal:
        // check if trees p and q are the same
        // two trees are the same if they are structurally identical and nodes have the same value

        // return:
        // boolean value

        // logic:
        // recursively compare p->left with q->left and p->right and q->right
        // if they are equal continue down the tree,
        // otherwise return false

        if (!p && !q) return true;
        if (!p || !q) return false;

        return (p->val == q->val && isSameTree(p->right, q->right) && isSameTree(p->left, q->left));

    }
};