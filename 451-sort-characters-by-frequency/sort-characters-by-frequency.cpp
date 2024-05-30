class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;
        string soln= "";
        
        for(char i : s){
            mpp[i]++;
        }

        vector<pair<char, int>> l(mpp.begin(), mpp.end());

        sort(l.begin(), l.end(), comparator);

        
        for(auto it  = l.begin();it!=l.end() ;it++){
            while(it->second > 0 ){
                soln+=it->first;
                it->second--;
            }
        }


        return soln;

    }

    bool static comparator(pair<char ,int> &a, pair<char, int> &b){
        return a.second>b.second;
    }
};