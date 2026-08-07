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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*> st;

        // Store all nodes of list A
        ListNode* temp = headA;
        while (temp != NULL) {
            st.insert(temp);
            temp = temp->next;
        }

        // Check nodes of list B
        temp = headB;
        while (temp != NULL) {
            if (st.find(temp) != st.end()) {
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};