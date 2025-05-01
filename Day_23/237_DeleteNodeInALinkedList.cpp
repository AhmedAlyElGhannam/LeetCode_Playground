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
    void deleteNode(ListNode* node) {
        // store the identity of next node
        ListNode* temp = node->next;

        // node to be deleted takes up the identity of next
        node->val = temp->val;

        // delete next node's existence
        node->next = temp->next;
        delete temp;

        return;

    }
};

