class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return nums[0];
        int prev = 0;
        int  curr = nums[0]; 
        int maxi = curr;
        for(int i=2;i<=n;i++)
        {
            maxi =max(prev+nums[i-1],curr);
            prev = curr;
            curr = maxi;
        }
        return maxi;

    }
};
