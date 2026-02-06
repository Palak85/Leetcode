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
    vector<int> ans;
    void rightview(TreeNode* &root,int level, int &visited){
        if(root == nullptr){
            return;
        }
        if(level > visited){
            ans.push_back(root->val);
            visited = level;
        }
        rightview(root->right, level+1, visited);
        rightview(root->left, level+1, visited);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level = 1;
        int visited = 0;
        rightview(root,level,visited);
        return ans;
    }
};