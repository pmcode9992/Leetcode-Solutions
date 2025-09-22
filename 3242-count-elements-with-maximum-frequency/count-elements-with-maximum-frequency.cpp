class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> cnt(101, 0);
        int res = 0;
        for(int i : nums){
            cnt[i]++;
        }
        sort(cnt.begin(), cnt.end());
        for(int i = cnt.size() - 1;i >= 0;i--){
            res += cnt[i];
            if(i != 0 && cnt[i - 1] != cnt[i]){
                break;
            }
        }
        return res;
    }
};