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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* end = head;
        ListNode* start = head;
        // if(n == 1){
        //     if(end->next == NULL){
        //         return NULL;
        //     }
        //     //remove end
        //     while(end!= NULL){
        //         if(end->next!= NULL && end->next->next == NULL){
        //             end->next = end->next->next;
        //             return head;
        //         }
        //         end = end->next;

        //     }
        // }

        // for(int i =1 ;i<=n + 1;i++){
        //     if(end != NULL){
        //         end = end->next;
        //     }     
        // }
        // while(end != NULL){
        //     start = start->next;
        //     end = end->next;
        // }

        // start->next = start->next->next;
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        for(int i =1;i<=n;i++){
            if(end!=NULL){
                end= end->next;
            }
            else{
                return head->next;
            }
        }
        if(end!= NULL){
            end = end->next;
        }
        else{
            return start->next;
        }
        while(end!= NULL){
            end = end->next;
            start = start->next;
        }
        if(start->next!= NULL){
            start->next = start->next->next;
        }
        cout<<start->val;
        return head;

    }
};