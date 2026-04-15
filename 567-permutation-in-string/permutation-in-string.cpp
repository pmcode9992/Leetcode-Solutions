class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> ms1, cpyms1;
        int ns1 = s1.size(), ns2 = s2.size();
        bool f = true;
        for(char i : s1){
            ms1[i]++;
        }

        for(int i = 0 ; i <= ns2 - ns1 ; i++ ){
            cpyms1 = ms1;
            f = true;
            for(int j = i ; j < i + ns1 ;j++){
                cpyms1[s2[j]]--;
            }
            for(auto it : cpyms1){
                if(it.second > 0){
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
