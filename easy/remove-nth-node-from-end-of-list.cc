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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // fast and slow pointer
        ListNode* fast = head;
        ListNode** slow = &head;

        while (n--) {
            fast = fast->next;
        }
        for (int i = 0; fast != NULL; ++i) {
            fast = fast->next;
            slow = &(*slow)->next;
        }
        *slow = (*slow)->next;
        return head;
    }
};
