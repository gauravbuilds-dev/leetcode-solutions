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
    // 1st middle node
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while ( fast -> next != NULL && fast -> next -> next != NULL ){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    // reverse LinkedList
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL){
            ListNode* Next = curr -> next;

            curr -> next = prev;

            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // Empty and single node is always palindrome
        if (head == NULL || head -> next == NULL){
            return true;
        }
        // step 1 = findmiddle
        ListNode* middle = findMiddle(head);

        // step 2 = reverse
        ListNode* Secondhead = reverse(middle->next);
        middle -> next = Secondhead;

        // step 3 = compare
        ListNode* first = head;
        ListNode* second = Secondhead;

        while (second != NULL){
            if ( first -> val != second -> val ){
                middle -> next = reverse(Secondhead);
                return false;
            }
            first = first -> next ;
            second = second -> next;
        }
        middle -> next = reverse(Secondhead);
        return true;
    }
};