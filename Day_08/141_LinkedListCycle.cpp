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
    // the trick is to make the node address itself the key, not the value cuz it repeats itself
    bool hasCycle(ListNode *head) {
        unordered_set<int> hashSet;
        ListNode* dumDum = head;
        while (dumDum)
        {
            if (hashSet.contains((uint64_t)dumDum))
                return true;
            
            hashSet.insert((uint64_t)dumDum);
            dumDum = dumDum->next;
        }
        return false;
    }
};
