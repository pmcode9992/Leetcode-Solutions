class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0 ;
        int r = nums.size() -1;
        int m;
        while(l<=r){
            m = (r-l)/2 + l;
            if(m%2!=0){
                if(m>0 && nums[m-1]==nums[m]){
                    //check right
                    l = m + 1;
                }
                else{
                    //check left and self
                    //self
                    if(nums[m + 1] != nums[m]){
                        return nums[m];
                    }
                    //right
                    r = m -1;
                }
            }
            else{
                if(m < nums.size() -1 && nums[m] == nums[m+1]){
                    //check right
                    l = m + 1;

                }
                else{
                    //check left and self
                    if( (m > 0 && nums[m-1]!= nums[m]) || m == 0){
                        return nums[m];
                    }
                    //right
                    r = m -1;
                }
            }
        }
        return nums[m];
        
    }
};