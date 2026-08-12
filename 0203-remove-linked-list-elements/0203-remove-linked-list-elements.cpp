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
    ListNode* removeElements(ListNode* head, int val) {
        // create dummy node because head of LL may be equal to val
        ListNode* dummy = new ListNode(-1);

        // make dummy node head
        dummy -> next = head;
        ListNode* curr = dummy;
        while (curr -> next != NULL){
            // check value of each node if eual then skip that node and connect next node
            if ( curr -> next -> val == val){
                curr -> next = curr -> next -> next;
            }else{
                curr = curr -> next;
            }
        }
        // return head
        return dummy -> next;
    }
};