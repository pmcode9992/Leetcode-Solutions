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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        //hare and tort to find centre of list
        ListNode* tort = head;
        ListNode* hare = head;
        ListNode* rev = new ListNode(tort->val);
        while(hare!= NULL && hare->next!= NULL){
           
            hare = hare->next->next;
            tort = tort->next;
            ListNode* newNode = new ListNode(tort->val);
            newNode->next = rev;
            rev = newNode;

        }
        if(hare == NULL){
            rev = rev->next;
        }
        ListNode* t1 = rev;

        while(tort != NULL){
            //cout<< tort->val << " - "<<rev->val<<endl;
            if(rev== NULL){
                return false;
            }
            if(rev->val != tort->val){
                return false;
            }
            rev = rev->next;
            tort = tort->next;
        }
        if(tort == NULL && rev == NULL){
            return true;
        }
        return false;



    }
};