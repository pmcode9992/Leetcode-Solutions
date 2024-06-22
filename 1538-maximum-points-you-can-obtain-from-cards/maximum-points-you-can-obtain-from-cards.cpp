class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> lsum;
        int ls = 0;
        int rs = 0;
        vector<int> rsum;

        int n = cardPoints.size();
        for(int i =0;i<k;i++){
            ls+=cardPoints[i];
            rs+=cardPoints[n - i -1];
            lsum.push_back(ls);
            rsum.push_back(rs);
        }
        for(int i =0;i< k;i++){
            cout<<lsum[i]<< " ";
        }
        cout<<endl;
        for(int i =0;i< k;i++){
            cout<<rsum[i]<< " ";
        }

        int ans = max(lsum[k-1], rsum[k-1]);
        for(int i = 0 ;i < k-1 ; i++){
            ans = max(ans,lsum[k-i-2] + rsum[i]);
        }
        return ans;
    }
};