class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        Arrays.sort(piles);
        int l = 1;
        int r = piles[piles.length - 1];
        int mid = l + (r-l)/2;

        while(l <= r){
            int hours = check(piles, mid);
            if(hours <= h){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
            mid = l + (r-l)/2;

        }
        return mid;
    }

    public static int check(int[] piles, int mid){
        int sum = 0;
        for(int i : piles){
            sum += Math.ceil((double) i/  mid);
        }
        return sum;
    }
}
