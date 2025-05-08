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
    int pairSum(ListNode* head) {
        // defining a stack to store node values in reverse order
        stack<int> reverse_list;
        ListNode* tempNode = head;
        while (tempNode)
        {
            reverse_list.push(tempNode->val);
            tempNode = tempNode->next;
        }

        // variable to hold sum to-be returned
        int bigSum = 0;
        int temp = 0;

        // traverse list and find the biggest sum
        while (head) 
        {
            temp = head->val + reverse_list.top();
            if (temp > bigSum)
            {
                bigSum = temp;
            }
            head = head->next;
            reverse_list.pop();
        }

        return bigSum;
    }
};
