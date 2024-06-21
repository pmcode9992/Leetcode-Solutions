class Solution {
public:
    bool freqCheck(map<char, int> mpp, int k){
        char greatest = (mpp.begin())->first;
        for(auto it= mpp.begin() ; it!=mpp.end();it++){
            if(mpp[greatest] <= it->second){
                greatest = it->first;

            }
        }
        int sum =0;
        for(auto it= mpp.begin() ; it!=mpp.end();it++){
            if(it->first!= greatest){
                sum += it->second;

            }
            if(sum > k){
                return true;
            }
        }
        return false;
        
    }
    int characterReplacement(string s, int k) {
        map<char, int> mpp;
        int end = 0;
        int start = 0;
        int maxi = 0;
        while (end < s.length()) {
            mpp[s[end]]++;
            while(mpp.size() > 1 && freqCheck(mpp, k)){
                mpp[s[start]]--;
                start++;
            }
            maxi = max(maxi, end - start + 1);
            end++;
        }
        return maxi;
    }
};