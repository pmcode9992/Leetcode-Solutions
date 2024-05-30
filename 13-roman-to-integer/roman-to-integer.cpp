class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp;
        mpp.insert({{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}});
        int val = mpp[s[0]];
        int i;
        for(i =1 ;i< s.length()-1;i++){
            cout<<val<<endl;
            if(val>=mpp[s[i]] && mpp[s[i]] >= mpp[s[i+1]]){
                val+=mpp[s[i]];
            }
            else if(val>=mpp[s[i]] && mpp[s[i]] < mpp[s[i+1]]){
                val += mpp[s[i+1]] - mpp[s[i]];
                i++;
            }
            else{
                val = mpp[s[i]] - val;
            }
            
        }
        if(i==s.length() -1 && val>=mpp[s[i]]){
            val+= mpp[s[i]];
            i++;
        }
        if(i==s.length() -1){
            val = mpp[s[i]] - val;
        }
        return val;
    }
};

//IV
// val = 1994
// 