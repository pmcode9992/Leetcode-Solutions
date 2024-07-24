class Solution {
public:

    int solveOptimal(vector<int>& nums){
        if(nums.size()==0){
            return 0;
        }
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int j=1;j<nums.size();j++){
            if(nums[j]>ans.back()){
                ans.push_back(nums[j]);
            }
            else{
                int index=lower_bound(ans.begin(),ans.end(),nums[j])-ans.begin();
                ans[index]=nums[j];
            }
        }
        return ans.size();
    }

    int lengthOfLIS(vector<int>&nums) {
        return solveOptimal(nums);
    }
};