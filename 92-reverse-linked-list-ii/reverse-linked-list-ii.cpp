/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dmy = new ListNode(0, head);
        ListNode *LP, *P = dmy, *C = head, *tempNxt;

        // phase 1 , init LP
        //0 1  2 3 4 5
        //  LP P C
        for(int i = 0; i < left - 1;i++){
            P = C;
            C = C->next;
        }
        LP = P;
        P = C;
        C = C->next;

        //phase 2, reverse list
        //0 1  2 3 4 5
        //  LP     P C
        for(int i = 0 ; i < right - left;i++){
            tempNxt = C->next;
            C->next = P;
            P = C;
            C = tempNxt;
        }

        //phase 3, final connections
        LP->next->next = C;
        LP->next = P;
        return dmy->next;
    }
};