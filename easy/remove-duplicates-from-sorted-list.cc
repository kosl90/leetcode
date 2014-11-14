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
        ListNode* current = head;
        while (current and current->next) {
            ListNode* next = current->next;
            if (current->val == next->val) {
                current->next = next->next;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};
