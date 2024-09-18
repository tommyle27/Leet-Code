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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // given:
        // given two binary trees "root1" and "root2"

        // goal:
        // merge the two given bianry trees
        // merge rule: if two nodes overlap the sum of the overlapping nodes become the new node in the merged tree
        // Constraints:
            // number of nodes in both trees range [0, 2000]
            // -10^4 <= node.val <= 10^4

        // return:
        // return the merged tree

        // logic:
        // DFS
        // if one of the trees is NULL return the other tree
        // if both trees are not NULL, sum the node values and set as the new root node
        // Left Side: search left side of both trees
            // if both trees have a node sum their values and set as the new node
            // if one tree has a node and the other is NULL attach the existing node to the merged tree
        // Apply the same logic to the right side
        // recursively iterate until all paths from both trees are traveres and merged appropriately

        // BASE CASES:
        if (root1 == NULL && root2 == NULL) return NULL;
        if (root1 != NULL && root2 == NULL) return root1;
        if (root1 == NULL && root2 != NULL) return root2;

        if (root1 && root2) {
            root1->val += root2->val;
            std::cout << "new node sum: " << root1->val << std::endl;
        }

        root1->left = mergeTrees(root1->left, root2->left);

        root1->right = mergeTrees(root1->right, root2->right);

        return root1;
    }
};