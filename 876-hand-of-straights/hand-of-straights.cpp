class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize !=0 ){
            return false;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i : hand) {
            pq.push(i);
        }
        vector<int> group;
        vector<int> temp;
        while (!pq.empty() || !temp.empty()) {
            if (pq.empty() && !temp.empty()) {
               return false;
            }
            if (group.size() == 0) {
                //sub grp empty
                group.push_back(pq.top());
                pq.pop();
            } else if (group.size() >= groupSize) {
                //sub grp full
                group.clear();
                for (auto it = temp.begin(); it != temp.end(); it++) {
                    pq.push(*it);
                }
                temp.clear();
            } else if (pq.top() == ((group.back()) + 1)) {
                // add to sub grp
                group.push_back(pq.top());
                pq.pop();
            } else if (pq.top() != ((group.back()) + 1)) {
                // can't add to sub grp
                temp.push_back(pq.top());
                pq.pop();
            }

        }
        return true;
    }
};