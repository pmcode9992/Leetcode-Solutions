class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int mid = 0;
        if(r == 1){
            if(nums[0] == target){
                return 0;
            }
            else{
                return -1;
            }
        }
        while(r - l > 1){
            mid = (r - l) / 2 + l;
            cout<< l<< " "<<mid<< " "<<r<<endl;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        if(nums[r] == target){
            return r;
        }
        if(nums[l] == target){
            return l;
        }
        return -1;
    }
};

