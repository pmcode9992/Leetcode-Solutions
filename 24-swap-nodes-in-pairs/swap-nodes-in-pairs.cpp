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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr){
            return head;
        }
        ListNode *dmy = new ListNode(0, head);
        ListNode *LP = dmy, *P = head, *C = head->next;
        while(C != nullptr){
            P->next = C->next;
            C->next = P;
            LP->next = C;
            LP = P;
            P= P->next;
            if(P != nullptr){
                C = P->next;
            }
            else{
                C = nullptr;
            }
        }
        return dmy->next;
    }
};