class Solution {
public:
    bool checkPali(vector<char>& s, int l , int r){
        if(l>=r){
            return true;
        } 
        if(s[l]== s[r]){
            l++;
            r--;
            return checkPali(s,l,r);
        }
        else{
            return false;
        }

    }
    bool isPalindrome(string s) {
        vector<char> format;
        for( char ch : s){
            if(isalnum(ch)){
                format.push_back(tolower(ch));
            }
        }
        return checkPali(format,0,format.size() -1);
    }
};