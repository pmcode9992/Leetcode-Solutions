class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> need;
        for(int i = 0 ; i < nums.size() ; i++){
            if(need.count(nums[i]) > 0){
                return {need[nums[i]], i};
            }
            need[target - nums[i]] = i;
        }
        return {};
    }
};