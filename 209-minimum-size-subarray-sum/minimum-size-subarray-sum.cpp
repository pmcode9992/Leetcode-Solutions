class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = 0, e = 0, currsum = 0, len = nums.size() + 1;
        while(e <= nums.size()){
            if(currsum < target){
                if(e < nums.size())
                {currsum += nums[e];}
                e++;
            }
            else{
                len = min(len, e - s);
                currsum -= nums[s++];
            }
        }
        if (len == nums.size() + 1){return 0;}
        return len;
    }
};