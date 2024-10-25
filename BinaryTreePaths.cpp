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
#include <vector>

class Solution {
public:
    void DFS(vector<string>& paths, TreeNode* root, string node) {
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(node);
        }

        if (root->left != nullptr) {
            //node += "->" + to_string(root->left->val);
            std::cout << node << std::endl;
            DFS(paths, root->left, node + "->" + to_string(root->left->val));
        }

        if (root->right != nullptr) {
            //node += "->" + to_string(root->right->val);
            std::cout << node << std::endl;
            DFS(paths, root->right, node + "->" + to_string(root->right->val));
        }

    }

    vector<string> binaryTreePaths(TreeNode* root) {
        // given:
        // given the root of a binary tree

        // goal:
        // find all root to leaf paths and store them as a string within an array

        // return:
        // return an array of strings containing all the root to leaf paths

        // logic:
        // DFS and backtracking

        // create an array to store paths
        vector<string> paths;
        string node = to_string(root->val);

        if (!root) return paths;

        DFS(paths, root, node);

        return paths;
    }
};