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
        // if list is empty or has one node --> return
        if ((!head) || (!head->next))
            return head;
        
        ListNode* node = NULL; // by the end this will be the new head of 2nd list
        ListNode* dumDum_next = NULL;

        // reverse list
        while (head)
        {
            // store next
            dumDum_next = head->next;

            // reverse ptr
            head->next = node;

            // move prev forward
            node = head;

            // move mid forward
            head = dumDum_next;
        }

        return node;
    }
};
