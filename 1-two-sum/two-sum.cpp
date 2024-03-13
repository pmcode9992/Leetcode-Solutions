class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for(int i =0 ; i<  n ;i++){
            int complement = target - nums[i];
            if(hash.count(complement) == 0){
                hash[nums[i]] = i;
            }
            else{
                return {hash[complement], i};
            }
        }
        return {-1,-1};
    }

};