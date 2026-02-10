class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = 1, maxlen = 1;
        if(nums.size() < 2){
            return nums.size();
        }
        sort(nums.begin(), nums.end());
        int cur = nums[0];
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == cur){
                continue;
            }else if(nums[i] == cur + 1){
                cur++;
                len++;
            }
            else{
                cur = nums[i];
                len = 1;
            }
            maxlen = max(maxlen, len);
        }
        // maxlen = max(maxlen, len);
        return maxlen;
        
    }
};