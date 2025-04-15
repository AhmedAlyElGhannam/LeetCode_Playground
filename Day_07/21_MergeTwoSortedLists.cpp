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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        // create a head node for new list
        ListNode* head = new ListNode(0);
        // create tail node 
        ListNode* tail = head;

        // as long as neither lists is null
        while (l1 && l2)
        {
            // if l1 val is smaller
            if (l1->val < l2->val)
            {
                // attach it to new list
                tail->next = l1;
                // advance l1
                l1 = l1->next;
            }
            else // if l2 val is smaller or equal
            {
                // attach it to new list
                tail->next = l2;
                // advance l2
                l2 = l2->next;
            }

            // advance tail of new list
            tail = tail->next;
        }

        // attach remaining nodes into new list
        tail->next = l1 ? l1 : l2;

        // relocate head to be the next element as it marks the actual start now
        head = head->next;

        // return head;
        return head;
    }
};
