class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0;
        int leftMax = 0;

        for (char i : s) {
            switch (i) {
            case '(':
                leftMin++;
                leftMax++;
                break;
            case '*':
                leftMin--;
                leftMax++;
                break;
            case ')':
                leftMin--;
                leftMax--;
                break;
            default:
                break;
            }
            if (leftMin < 0) {
                leftMin = 0;
            }
            if (leftMax < 0) {
                return false;
            }
        }
        return leftMin == 0;
    }
};