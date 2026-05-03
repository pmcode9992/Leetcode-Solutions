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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode *, int>> q;
        vector<vector<int>> res;
        if(root == nullptr){
            return {};
        }
        q.push({root, 0});
        while(!q.empty()){
            auto temp = q.front();
            if(temp.first->left != nullptr){
                q.push({temp.first->left, temp.second + 1});
            }
            if(temp.first->right != nullptr){
                q.push({temp.first->right, temp.second + 1});
            }
            if(res.size() <= temp.second){
                res.push_back({});
            }
            res[temp.second].push_back(temp.first->val);
            q.pop();
        }
        return res;
        
    }
};