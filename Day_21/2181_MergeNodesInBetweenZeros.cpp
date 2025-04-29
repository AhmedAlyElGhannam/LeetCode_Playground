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
    ListNode* mergeNodes(ListNode* head) {
        if (head == NULL) 
        {
            return NULL;
        }

        if (head->next == NULL)
        {
            return head;
        }

        // skip the first 0 in list
        ListNode* newListHead = head->next;

        // create a temp node to hold the new head and traverse the list
        ListNode* temp = newListHead;
        int sum = 0;
        
        while (temp)
        {
            // keep summing non-zero values and advancing temp until a 0 is reached
            while (temp->val != 0)
            {
                sum += temp->val;
                temp = temp->next;
            }

            // assign the sum to newListHead
            newListHead->val = sum;

            // move temp ahead to skip the newly-found 0
            temp = temp->next;

            
            if (temp != NULL) 
            {
                // traverse newListHead to reach temp
                newListHead->next = temp;
                newListHead = newListHead->next;
            }
            else
            {
                // end the list
                newListHead->next = NULL;
            }

            // reset sum variable
            sum = 0;
        }

        // return the new list
        return head->next;
    }
};

