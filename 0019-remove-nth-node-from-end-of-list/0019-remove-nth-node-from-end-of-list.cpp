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
    int size_calc(ListNode* head){
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL){
            temp = temp -> next;
            size++;
        }
        return size;
    }   

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = size_calc(head);
        // base case handle
        if (size == n){
            ListNode* newhead  = head -> next ;
            delete head;
            return newhead;
        }

        ListNode* temp = head;
        for ( int i = 1; i < (size - n);  i++){
            temp = temp -> next;

        }

        temp -> next = temp -> next -> next;
    
        return head;
    }
};