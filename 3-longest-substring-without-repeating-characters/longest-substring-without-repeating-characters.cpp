class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256, -1);
        int l = 0;
        int r = 0;
        int len = 0;
        int n = s.length();
        while(r < n){
            if(mp[s[r]] != -1){
                l = max(mp[s[r]] + 1, l);   // move the left pointer ahead if duplicates are found
            }
            mp[s[r]] = r;

            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};