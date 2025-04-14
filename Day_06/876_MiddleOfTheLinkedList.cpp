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
    ListNode* middleNode(ListNode* head) {
 	// if list is empty or contains one element --> return    
	if (!head || !head->next)
            return head;

        // using turtle-hare algorithm (two pointers)
        ListNode* turtle = head;
        ListNode* hare = head;

        while (hare && hare->next)
        {
            // turtle takes one step
            turtle = turtle->next;

            // hare takes two
            hare = hare->next->next;
        }

        // turtle now contains the middle
        return turtle;
    }
};
