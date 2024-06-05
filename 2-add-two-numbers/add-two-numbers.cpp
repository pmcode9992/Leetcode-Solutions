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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        ListNode* head = l1;

        //equalize lengths
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        while(t1->next!=NULL && t2->next!=NULL){
            t1 = t1->next;
            t2 = t2->next;
        }

        while(t1->next == NULL && t2->next!= NULL){
            t1->next = new ListNode(0);
            t1 = t1->next;
            t2 = t2->next;
        }

        while(t2->next == NULL && t1->next!= NULL){
            t2->next = new ListNode(0);
            t2 = t2->next;
            t1 = t1->next;
        }

        if(t1->next == NULL && t2->next == NULL){
            cout<<"HAHAHAHA"<<endl;
        }

        //add
        while (l1 != NULL && l2 != NULL) {
            sum = l1->val + l2->val + carry;
            //cout<<sum<<endl;
            if (sum >= 10) {
                carry = sum/10;
                sum %= 10;
                
            }
            else{
                carry = 0;
            }
            if(l1->next == NULL && l2->next!=NULL){
                break;
            }
            l1->val = sum;
            if(l1->next == NULL && carry>0){
                l1->next = new ListNode(carry);
                break;
            }
            l1= l1->next;
            l2 = l2->next;
        }

        return head;
    }
};