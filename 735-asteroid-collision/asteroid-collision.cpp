class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> soln;
        int a;
        bool boom = false;
        for(int i =0 ;i< asteroids.size();i++){
            a = asteroids[i];
            while(!st.empty() && st.top() > 0 && a < 0){
                //collision 
                if(abs(st.top()) == abs(a)){
                    boom = true;
                    st.pop();
                    break;
                }
                a = abs(a)> abs(st.top()) ? a : st.top();
                st.pop();
            }
            if(!boom){
                st.push(a);
            }
            else{
                boom = false;
            }
            
        }
        while(!st.empty()){
            soln.push_back(st.top());
            st.pop();
        }
        reverse(soln.begin(), soln.end());
        return soln;
    }
};