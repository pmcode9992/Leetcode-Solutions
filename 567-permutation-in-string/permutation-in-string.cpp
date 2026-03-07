class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> mpp1 (26, 0);
        for(int i = 0 ; i < s1.size() ; i++){
            mpp1[s1[i] - 'a']++;
        }
        int n = s2.size(), m = s1.size();
        for(int i = 0 ; i < n - m + 1 ; i++){
            bool f = true;
            vector<int> mpp2 = mpp1;
            for(int j = i ; j < i + m ; j++){
                mpp2[s2[j] - 'a']--;

            }
            for(int k = 0 ; k < 26;k++){
                if(mpp2[k] > 0){
                    f = false;
                    break;
                }
            }
            if(f){
                return true;
            }
        }
        return false;


        
    }
};