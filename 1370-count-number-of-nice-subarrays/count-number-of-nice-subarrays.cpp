class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int s = 0, e = 0, res = 0, cnt = 0, temp = 0;
        while(e < nums.size()){
            if(nums[e] & 1){
                cnt++;
                temp = 0;
            }
            while(cnt == k){
                temp++;
                if(nums[s] & 1){
                    cnt --;
                }
                s++;
            }
            res += temp;
            e++;
        }
        return res;
    }
};