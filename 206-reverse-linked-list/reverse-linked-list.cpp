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

    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL ){
            return head;
        }
        ListNode* temp = head;
        while(head->next != NULL){
            head  = head->next;
        }
        while(temp->next != head){
            ListNode* newNode = new ListNode(temp->val);
            newNode->next = head->next;
            head->next = newNode;
            temp = temp->next;
        }
        ListNode* newNode = new ListNode(temp->val);
        newNode->next = head->next;
            head->next = newNode;
        return head;
    }
};