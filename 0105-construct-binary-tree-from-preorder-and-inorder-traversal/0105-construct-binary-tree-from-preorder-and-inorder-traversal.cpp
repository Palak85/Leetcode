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
    int preIndex = 0;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd) {
        if(inStart > inEnd) return NULL;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int pos = inStart;
        while(inorder[pos] != rootVal) pos++;

        root->left = build(preorder, inorder, inStart, pos - 1);
        root->right = build(preorder, inorder, pos + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};