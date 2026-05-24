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
    vector<TreeNode*> solve(int start, int end) {
        vector<TreeNode*> trees;

        // Empty tree
        if (start > end) {
            trees.push_back(nullptr);
            return trees;
        }

        // Try every value as root
        for (int root = start; root <= end; root++) {

            // Generate all possible left and right subtrees
            vector<TreeNode*> leftTrees = solve(start, root - 1);
            vector<TreeNode*> rightTrees = solve(root + 1, end);

            // Combine them
            for (auto left : leftTrees) {
                for (auto right : rightTrees) {
                    TreeNode* node = new TreeNode(root);
                    node->left = left;
                    node->right = right;
                    trees.push_back(node);
                }
            }
        }

        return trees;
    }

    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return solve(1, n);
    }
};