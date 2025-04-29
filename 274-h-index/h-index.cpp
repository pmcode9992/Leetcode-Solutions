class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int temp = n;
        while(n > 0){
            int cnt = 0;
            for(int i = 0 ; i < temp ; i++){
                if(citations[i] >= n ){
                    cnt++;
                }
            }
            if(cnt >= n){
                return n;
            }
            n--;
        }
        return n;
    }
};