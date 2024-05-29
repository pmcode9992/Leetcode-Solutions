class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpp;
        for(int i =0 ;i<s.length();i++){
            if(mpp.find(s[i]) != mpp.end()){
                if(mpp[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                for(auto it : mpp){
                    if(it.second == t[i]){
                        return false;
                    }
                }
                mpp[s[i]] = t[i];
            }

        }
        return true;
    }
};