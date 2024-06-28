class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            int change = bills[i] - 5;
            switch (change) {
            case 15:
                if (ten >= 1 && five >= 1) {
                    ten--;
                    five--;
                } else if (five >= 3) {
                    five-=3;
                } else {
                    return false;
                }
                break;
            case 5:
                if (five >= 1) {
                    five--;
                } else {
                    return false;
                }
                break;
            default:
                break;
            }
            if (bills[i] == 5) {
                five++;
            }
            if (bills[i] == 10) {
                ten++;
            }
        }
        return true;
    }
};