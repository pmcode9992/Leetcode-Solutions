class Solution {
public:
    bool isValid(char ch){
        return (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9');
    }
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while(start < end){
            if(!isValid(s[start])){
                start++;
                continue;
            }
            if(!isValid(s[end])){
                end--;
                continue;
            }
            //uppercase, lowercase, number
            if(s[start] >= 'a' ){s[start] -= ('a' - 'A');}
            if(s[end] >= 'a' ){s[end] -= ('a' - 'A');}
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
            
        }
        return true;

        
    }
};