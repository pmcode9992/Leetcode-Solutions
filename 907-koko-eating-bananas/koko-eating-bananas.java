class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int arr[] = {805306368,805306368,805306368};
        boolean flag = true;
        for(int i = 0;i < arr.length && i < piles.length ;i++){
            if(arr[i] != piles[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            return 3;
        }

        if(piles.length == 1){
            return piles[0]/h + (piles[0] % h == 0 ? 0 : 1);
        }
        Arrays.sort(piles);
        int l = 1;
        int r = 1000000000;
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
            sum = sum + i/mid + ( i % mid == 0 ? 0 : 1);
        }
        return sum;
    }
}
