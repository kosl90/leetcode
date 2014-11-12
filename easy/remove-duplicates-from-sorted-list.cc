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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode* root = head;
        while (head and head->next) {
            ListNode* next = head->next;
            if (head->val == next->val) {
                head->next = next->next;
            } else {
                head = head->next;
            }
        }
        return root;
    }
};
