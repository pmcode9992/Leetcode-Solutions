class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        int n = strs.size();
        if(n == 1){
            return strs[0];
        }
        while (true) {
            for (int j = 0; j < n - 1; j++) {
                if (i < strs[j].length() && i < strs[j + 1].length()) {
                    if (strs[j].at(i) != strs[j + 1].at(i)) {
                        return strs[j].substr(0,i);
                    }
                }
                else{
                    return strs[j].substr( 0, i);
                }
            }
            i++;
        }
        return strs[0];
    }
};