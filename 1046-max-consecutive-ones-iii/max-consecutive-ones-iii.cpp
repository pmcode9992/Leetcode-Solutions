class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        int maxi =0;
        while(end< nums.size()){
            if(nums[end]){end++;}
            else{
                if(k>0){
                    k--;
                    end++;
                }
                else{
                    if(!nums[start]){k++;}
                    start++;

                }
            }
            maxi = max(maxi, (end - start));
        }
        return maxi;
    }
};