class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = 0;
        int w2 = 0;
        int n1 = word1.length();
        int n2 = word2.length();
        string soln="";
        while(w1 < n1 && w2< n2){
            soln += word1[w1]; 
            soln += word2[w2];
            w1++;
            w2++;
        }
        while(w1<n1){
            soln += word1[w1];
            w1++;
        }
        while(w2<n2){
            soln += word2[w2];
            w2++;
        }
        return soln;
    }
};