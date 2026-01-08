class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        for(int i = 0 ; i < str1.size() ; i++){
            if(j < str2.size() && str1[i] == str2[j] || (str1[i] + 1- 97) % 26 + 97 == str2[j]){
                j++;
            }
        }
        if(j >= str2.size()){
            return true;
        }
        return false;
    }
};