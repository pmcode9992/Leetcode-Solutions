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
    bool func(TreeNode* root, vector<int> lt, vector<int> gt){
        if(root== nullptr){
            return true;
        }
        for(int i : lt){
            if(root->val >= i){
                return false;
            }
        }
        for(int i : gt){
            if(root->val <= i){
                return false;
            }
        }
        lt.push_back(root->val);
        bool f1 = func(root->left, lt, gt);
        lt.pop_back();
        gt.push_back(root->val);
        bool f2 = func(root->right, lt, gt);
        gt.pop_back();
        return f1 && f2;
    }
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return func(root->left, {root->val}, {}) && func(root->right, {}, {root->val});
    }
};