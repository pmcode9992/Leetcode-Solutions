using ll = long long;
const int MOD = 1e9 + 7;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        long long sum = 0;
        vector<int> left(n, -1);
        vector<int> right(n, n);

        //left min
        for(int i =0;i< n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }

        //right min
        for(int i =n -1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for(int i =0 ;i< n;i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i =0 ;i< n;i++){
            cout<<right[i]<<" ";
        }
        cout<<endl;

        for(int i =0;i< n;i++){
            sum += static_cast<ll>(i - left[i]) * (right[i] - i) * arr[i] % MOD;
            sum %= MOD;
        }
        return sum;
        
    }
};