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
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode* temp = head;

        // find length
        while (temp != NULL){
            length++;
            temp = temp -> next;
        }

        // find Kth node from start
        ListNode* first = head;
        for ( int i = 1; i < k ; i++){
            first = first -> next;
        }

        // find kth node from end
        ListNode* second = head;
        for ( int i = 1; i < length-k+1; i++){
            second = second -> next;
        }

        // swap values 
        int temp_val = first -> val;
        first -> val = second -> val;
        second -> val = temp_val;

        // return head
        return head;
    }
};