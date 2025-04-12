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
    // added carry with default value of 0 to make my life easier
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) 
    {
        // base case is if l1 is null && l2 is null && carry is 0
        if (!l1 && !l2 && (carry == 0))
            return NULL;

        // if l1 is not null --> get its value
        int val1 = l1 ? l1->val : 0;
        
        // if l2 is not null --> get its value
        int val2 = l2 ? l2->val : 0;

        // sum of curr vals plus carry from previous digit
        int sum = val1 + val2 + carry;

        // get only digits less than 10 (carry will be transmitted to next call)
        ListNode* res = new ListNode(sum % 10);

        // next node will be the result of the recursive call
        res->next = addTwoNumbers(l1 ? l1->next : NULL, l2 ? l2->next : NULL, sum / 10);

        // return new linked list
        return res;
    }
};
