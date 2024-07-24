class Solution {
public: 
int f(int n,int prev,vector<int>&nums,vector<vector<int>>&dp) 
{
    if(n==nums.size()) 
    return 0;  
    if(dp[n][prev+1]!=-1) 
    return dp[n][prev+1];
    int len=f(n+1,prev,nums,dp); 
    int len1=0;
    if(prev==-1 || nums[n]>nums[prev]) 
    len1=1+f(n+1,n,nums,dp); 
    return dp[n][prev+1]=max(len,len1);
}
    int lengthOfLIS(vector<int>& nums) { 
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1)); 
        return f(0,-1,nums,dp);
    }
};