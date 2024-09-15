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
    vector<double> averageOfLevels(TreeNode* root) {
        // Given:
        // given the root of a binary tree

        // Goal:
        // find the average of each level in the binary tree and return them in an array

        // Return:
        // return an array of averages

        // Logic:
        // use breadth first search
        // use a queue and push each queue entry's chil onto the end
        // NOTE: number of nodes in the tree is in range [1, 10^4]

        vector<double> answer;
        queue<TreeNode*> queueArray;

        queueArray.push(root);

        while (queueArray.size() != NULL)
        {
            double levelSize = queueArray.size();
            double levelSum = 0;

            for (int i = 0; i < levelSize; i++)
            {
                TreeNode* currentNode = queueArray.front();
                queueArray.pop();

                levelSum += currentNode->val;

                if (currentNode->left != NULL) queueArray.push(currentNode->left);
                if (currentNode->right != NULL) queueArray.push(currentNode->right);
            }
            answer.push_back(levelSum / levelSize);
        }

        return answer;
    }
};