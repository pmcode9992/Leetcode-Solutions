class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        vector<int> b;
        auto it = nums.end() - k;
        b.insert(b.begin(), it, nums.end());
        b.insert(b.end(), nums.begin(), it);
        nums = b;
    }
};