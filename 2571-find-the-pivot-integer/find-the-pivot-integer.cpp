class Solution {
public:
    int pivotInteger(int n) {
        int lsum = 1;
        int rsum = n;
        int l = 2;
        int r = n-1;
        while(l<=r){
            if(lsum<rsum){
                lsum += l;
                l++;
            }
            else if(lsum>rsum){
                rsum += r;
                r--;
            }
            else if(lsum == rsum && l==r){
                return l;
            }
            else if(lsum == rsum && l!=r){
                lsum += l;
                l++;
            }

        }
        return n==1? 1 : -1;

    }
};