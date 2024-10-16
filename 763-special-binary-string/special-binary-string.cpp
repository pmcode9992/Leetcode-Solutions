class Solution {
public:
    string makeLargestSpecial(string s) {
        int n=s.size();
        int cnt=0,start=0;
        vector<string> ans;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
            else cnt--;

            if(cnt==0){
               string temp='1'+makeLargestSpecial(s.substr(start+1,i-start-1))+'0';
               ans.push_back(temp);
               start=i+1;
            }
        }

        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        string res="";
        for(auto it:ans) res+=it;
        return res;
    }
};