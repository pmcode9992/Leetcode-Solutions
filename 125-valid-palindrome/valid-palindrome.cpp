class Solution {
public:
    bool isValid(char ch){
        if(ch >= 'A' && ch <= 'Z' || ch - 32 >= 'A' && ch - 32 <= 'Z' || ch >= '0' && ch <='9'){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while(start < end){
            while(!isValid(s[start]) && start < end){
                start++;
            }
            while(!isValid(s[end]) && end > start){
                end--;
            }
            if(s[start] >= 'a' && s[start] <= 'z'){s[start] -= 32;}
            if(s[end] >= 'a' && s[end] <= 'z'){s[end] -= 32;}
            if(s[start]!= s[end]){
                return false;
            }
            start++; end--;
        }
        return true;
    }
};