class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = 0;
        int end = nums.size() - 1;
        while(nums[end] < nums[0]){
            pivot++;
            end--;
        }
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() -1;
        int m ;
        while(l<=r){
            m = (r-l)/2 + l;
            if(nums[m]< target){
                l = m + 1;

            }
            else if (nums[m] > target){
                r = m-1;
            }
            else{
                //found
                //determine real position - absolute mod
                if(m - pivot < 0){
                    return (m-pivot)  + nums.size();
                }
                else{
                    return (m - pivot);
                }
            }
        }
        return -1;
    }
};