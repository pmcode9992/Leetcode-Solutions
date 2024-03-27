class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (abs(x) >= 1) {
            rev += (x % 10);
            x /= 10;
            if (abs(x) >= 1) {
                if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                    return 0;
                }
                rev *= 10;
            }
        }

        return rev;
    }
};