class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char, int> mpp;
        int left = 0;
        int right = 0;
        int count = 0;
        int n = s.length();
        while(right<n){
            mpp[s[right]]++;
            while(mpp.size() == 3 && left<= right){
                count += n - left - (right - left);
                mpp[s[left]]--;
                if(mpp[s[left]] ==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        return count;
    }
};