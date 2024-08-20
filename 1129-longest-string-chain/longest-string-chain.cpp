class Solution {
public:
    bool check(string a, string b) {
        int bi = 0;
        int ai = 0;
        while(bi < b.length()){
            if(a[ai] == b[bi]){
                ai++;
            }
            bi++;
        }
        if(ai != a.length()){
            return false;
        }
        return true;
    }
    static bool myComp(string a, string b){
        return a.length() < b.length();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), myComp);
        // for(string i : words){
        //     cout<< i <<endl;
        // }
        int n = words.size();
        int maxi = 0;
        vector<int> dp(n, 1);
        for (int i = 0; i < n; i++) {
            for (int prev = i - 1; prev >= 0; prev--) {
                if((words[i].length() == words[prev].length() + 1) && check(words[prev], words[i]) && dp[i] < dp[prev] + 1){
                    dp[i] = dp[prev] + 1;
                }
                
            }
            maxi= max(dp[i], maxi);
        }
        return maxi;
    }
};