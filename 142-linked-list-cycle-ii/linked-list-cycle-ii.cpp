/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* t1 = head;
        while(temp->next != NULL){
            t1 = head;
            while(t1 != temp){
                if(temp->next == t1){
                    return t1;
                }
                t1 = t1->next;
            }
            if(temp->next == temp){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};