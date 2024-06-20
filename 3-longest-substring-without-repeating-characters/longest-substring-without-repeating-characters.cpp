class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 1) {
            return 1;
        }
        map<char, int> mpp;
        int start = 0;
        int end = 0;
        int maxi = 0;
        while(end<s.length()){
            if(!mpp[s[end]]){
                mpp[s[end]] = end + 1;   
            }
            else{
                cout<<start<<" "<<end<<endl;
                maxi = maxi > (end - start) ? maxi : (end - start);
                int lim = mpp[s[end]];
                while(start<lim){
                    mpp[s[start]] = 0;
                    start++;
                }
                mpp[s[end]] = end + 1;
            }
            end++;
        }
        maxi = maxi > (end - start) ? maxi : (end - start);

        return maxi;
    }
};