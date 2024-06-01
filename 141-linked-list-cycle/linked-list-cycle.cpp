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
    bool hasCycle(ListNode *head) {
        //hare and tort

        ListNode *hare = head;
        ListNode *tort = head;
        if(head== NULL || head->next == NULL || head->next->next == NULL){
            return false;
        }
        while(hare->next!= NULL && hare->next->next != NULL){
            hare = hare->next->next;
            tort = tort->next;
            if(hare == tort){
                return true;
            }
        }
        return false;
    }
};