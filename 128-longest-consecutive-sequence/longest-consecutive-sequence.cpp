class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxlen = 0;
        for(int i : nums){
            if(!mpp[i])
            {
                int s = mpp[i - 1] + mpp[i + 1] + 1;
                maxlen = max(maxlen, s);
                mpp[i] = s;
                mpp[i - mpp[i - 1]] = s;
                mpp[i + mpp[i + 1]] = s;
            }
        }
        return maxlen;
        
    }
};