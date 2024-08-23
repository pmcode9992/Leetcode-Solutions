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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root){
            return {};
        }
        queue<pair<TreeNode *, int>> q;
        map<int, vector<int>> mpp;
        q.push({root, 0});
        while (!q.empty()) {
            int level = q.front().second;
            int s = q.size();
            for (int i = 0; i < s; i++) {
                auto it = q.front();
                TreeNode* node = it.first;
                mpp[level].push_back(node->val);
                if (node->left) {
                    q.push({node->left, level + 1});
                }
                if (node->right) {
                    q.push({node->right, level + 1});
                }
                q.pop();
            }
        }
        vector<vector<int>> soln;
        for (auto it : mpp) {
            soln.push_back(it.second);
        }
        return soln;
    }
};