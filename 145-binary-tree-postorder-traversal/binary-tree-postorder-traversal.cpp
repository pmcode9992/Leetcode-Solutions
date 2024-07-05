/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        vector<int> trav;
        for (int i : postorderTraversal(root->left)) {
            trav.push_back(i);
        }
        for (int i : postorderTraversal(root->right)) {
            trav.push_back(i);
        }
        trav.push_back(root->val);
        return trav;
    }
};