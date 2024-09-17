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
    int minDepth(TreeNode* root) {
        // given:
        // given a binary tree called "root"

        // goal:
        // find the shortest path that leads to a leaf node
        // NOTE: a leaf node is a node with no children

        // return:
        // return the size of the shortest path

        // logic:
        // use depth first search
        // OR
        // use breadth first search

        // BASE CASE:
        if (root == NULL) return 0;

        // depth first search method:
        // recursive:
        if (root->left == NULL && root->right == NULL) return 1;

        if (root->left == NULL) return 1 + minDepth(root->right);

        if (root->right == NULL) return 1 + minDepth(root->left);

        return 1 + min(minDepth(root->left), minDepth(root->right));

        // iterative:


        // breadth fist search method:
        /*
        queue<TreeNode*> useQueue;
        useQueue.push(root);

        int pathSize = 0;

        while (useQueue.size() != NULL)
        {
            int levelSize = useQueue.size();
            pathSize++;

            for (int i = 0; i < levelSize; i++)
            {
                TreeNode* currentNode = useQueue.front();
                useQueue.pop();

                if (currentNode->left == NULL && currentNode->right == NULL)
                {
                    return pathSize;
                }

                if (currentNode->left != NULL) {
                    useQueue.push(currentNode->left);
                }

                if (currentNode->right != NULL) {
                    useQueue.push(currentNode->right);
                }
            }

        }
        */

        return 0;
    }
};