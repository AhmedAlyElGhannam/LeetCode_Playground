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
    void reorderList(ListNode* head) {
        // if list is empty or has one node --> return
        if ((!head) || (!head->next))
            return;
        
        // split the list into two halves
        // the algorithm where two pointers are used 
        // one faster than the other is called turtle-hare
        ListNode* slow = head;
        ListNode* fast = head->next; 

        // keep traversing until the end is reached
        while (fast && fast->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2nd list starts by slow->next
        ListNode* mid = slow->next;
        ListNode* prev = NULL; // by the end this will be the new head of 2nd list
        ListNode* dumDum_next = NULL;

        // disconnecting lists
        slow->next = NULL;

        // reverse 2nd list
        while (mid)
        {
            // store next
            dumDum_next = mid->next;

            // reverse ptr
            mid->next = prev;

            // move prev forward
            prev = mid;

            // move mid forward
            mid = dumDum_next;
        }

        // defining temp nodes and preserving head
        ListNode* tmp1;
        ListNode* tmp2;
        ListNode* dumHead = head;

        // mergeing lists
        while (prev && dumHead)
        {
            // save next nodes
            tmp1 = dumHead->next;
            tmp2 = prev->next;

            // reorder
            dumHead->next = prev;
            prev->next = tmp1;

            // traverse
            dumHead = tmp1;
            prev = tmp2;
        }

        // return 
    }
};
