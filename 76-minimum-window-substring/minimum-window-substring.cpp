class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0, end = 0, ns = s.size(), have = 0, need = 0;
        unordered_map<char, int> tmap, smap;
        pair<int, int> res{-1, s.size()};
        for(char ch : t){
            tmap[ch]++;
        }
        need = tmap.size();
        while(end < ns){
            if(tmap[s[end]] == 0){
                end++;
                continue;
            }
            smap[s[end]]++;
            if(smap[s[end]] == tmap[s[end]]){have++;}
            while(have == need && start <= end){
                if(smap[s[start]] <= 0){
                    start++;
                    continue;
                }
                if(end - start < res.second - res.first){
                    res = {start, end};
                    cout<<res.first<< " "<<res.second<<endl;
                }
                if(smap[s[start]] == tmap[s[start]]){
                    have--;
                }
                smap[s[start]]--;
                start++;
            }
            end++;
        }
        if(res.second - res.first >= s.size()){
            return "";
        }
        return s.substr(res.first, (res.second - res.first + 1));
    }
};