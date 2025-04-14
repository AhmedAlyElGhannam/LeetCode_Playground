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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // exit if list is empty or has one element
        if ((!head) || (!head->next))
            return head;
        
        int gcd;
        ListNode* dumDum = head;

        while (dumDum && dumDum->next)
        {
            // get gcd using C++ built-in function
            // gcd = __gcd(dumDum->val, dumDum->next->val);

            // get gcd using my own function
            gcd = gcd_calc(dumDum->val, dumDum->next->val);

            // create a new node whose value is the calculated gcd
            ListNode* gcdNode = new ListNode(gcd);

            // insert new node into list
            gcdNode->next = dumDum->next;
            dumDum->next = gcdNode;

            // traverse list 
            dumDum = dumDum->next->next;
        }

        return head;
    }

    // gcd calculation (Euclidean Algorithm)
    int gcd_calc(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd_calc(b, a % b);
    }
    
};
