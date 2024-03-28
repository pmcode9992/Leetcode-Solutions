class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        long int dup = x;
        while(dup>=1){
            rev+=dup%10;
            dup/=10;
            if(dup>=1){
                rev*=10;
            }
            
        }
        cout<<rev;
        if(x - rev == 0){
            return true;
        }
        else{
            return false;
        }
    }
};