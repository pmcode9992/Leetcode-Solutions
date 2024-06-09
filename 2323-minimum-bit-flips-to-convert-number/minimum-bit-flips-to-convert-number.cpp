class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start^goal;
        int count = 0;
        while(res>0){
            count += res%2 == 1 ? 1 : 0;
            res/=2;
        }
        return count;
    }
};