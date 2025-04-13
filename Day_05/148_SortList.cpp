class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // base case
        if (!head || !head->next) 
            return head;

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
        // first list (starting with head) must be null-terminated
        slow->next = NULL;

        // recursion case: sort each sub-list independently
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        // merge sub-lists
        return merge(left, right);
    }

private:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        // dumdum node to store the beginning of the merged list
        ListNode dumDum(0);
        // stores the end of the merged list
        ListNode* tail = &dumDum;

        // so long as AT LEAST one of deez lists has elements
        while (l1 && l2) 
        {
            if (l1->val < l2->val) 
            {
                // if l1 is smaller --> store it in tail->next
                tail->next = l1;
                // advance l1 by one node
                l1 = l1->next;
            } 
            else 
            {
                // if l2 is smaller --> store it in tail->next
                tail->next = l2;
                // advance l2 by one node
                l2 = l2->next;
            }

            // advance tail
            tail = tail->next;
        }

        // merge remaining nodes
        tail->next = l1 ? l1 : l2;

        // return merged list
        return dumDum.next;
    }
};

