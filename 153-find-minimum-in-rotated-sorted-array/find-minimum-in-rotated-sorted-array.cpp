class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int h = n - 1 ;
        int m;
        while(l<=h){
            m = (h-l)/2 + l;
            if(nums[h] < nums[m]){
                l = m + 1 ;
            }
            else{
                if(m==0 || nums[m-1] > nums[m]){
                    return nums[m];
                }
                h = m - 1 ;
            }
        }
        return nums[m];
        
    }
};
