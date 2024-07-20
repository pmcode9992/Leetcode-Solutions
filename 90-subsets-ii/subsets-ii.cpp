class Solution {
public:
    void subSts(int index, vector<vector<int>> &soln, vector<int> visited, vector<int> nums){
        soln.push_back(visited);
        for(int i = index; i < nums.size();i++){
            if(i == index || nums[i] != nums[i-1])
            {
                visited.push_back(nums[i]);
                subSts(i + 1, soln, visited, nums);
                visited.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> soln;
        sort(nums.begin(), nums.end());
        subSts(0,soln,{},nums);
        return soln;
    }
};