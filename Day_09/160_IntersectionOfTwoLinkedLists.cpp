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
        unordered_set<ListNode*> hash_set;
        ListNode* dumA = headA;
        ListNode* dumB = headB;

        while (dumA)
        {
            hash_set.insert(dumA);
            dumA = dumA->next;
        }

        while (dumB)
        {
            if (hash_set.contains(dumB))
            {
                return dumB;
            }
            
            hash_set.insert(dumB);
            dumB = dumB->next;
        }

        return nullptr;
    }
};
