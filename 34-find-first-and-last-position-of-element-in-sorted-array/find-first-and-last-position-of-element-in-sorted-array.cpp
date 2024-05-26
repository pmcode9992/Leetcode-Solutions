class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int n = nums.size();
        int r = n -1;
        int m ;

        while(l<=r){
            m = (r-l)/2 + l;
            if(nums[m] > target){
                r = m-1;
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                //element found .. nums[m] == target
                //leftmost
                int temp = m;
                while(temp>0){
                    if(nums[temp - 1] == target){
                        temp--;
                    }
                    else{
                        break;
                    }
                    
                }
                l = temp;
                temp =m;
                //rightmost
                while(temp<n-1){
                    if(nums[temp + 1] == target){
                        temp++;
                    }
                    else{
                        break;
                    }
                    
                }
                return {l, temp};
            }
        }
        //element not found
        return {-1,-1};
    }
};