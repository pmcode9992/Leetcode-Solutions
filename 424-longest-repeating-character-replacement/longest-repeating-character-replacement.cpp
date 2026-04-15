class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, end = 0, maxlen = 0, n = s.size();
        unordered_map<char, int> freq;
        pair<char, int> mostfreq = {s[0], 1};
        while(end < n){
            freq[s[end]]++;
            if(mostfreq.second < freq[s[end]]){
                mostfreq = {s[end], freq[s[end]]};
            }
            while(end - start  + 1 > mostfreq.second + k){
                freq[s[start]]--;
                start++;
            }
            maxlen = max(maxlen, end - start + 1);
            end++;
        }
        return maxlen;

    }
};

