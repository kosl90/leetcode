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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // {1}, {2} -> {1,2}
        if (l1 == l2 and l1 == NULL) return NULL;
        ListNode* root = NULL;
        ListNode* current = NULL;
        
        if (l1 == NULL and l2 != NULL) {
            root = current = l2;
            l2 = l2->next;
        } else if (l1 != NULL and l2 == NULL) {
            root = current = l1;
            l1 = l1->next;
        } else {
            if (l1->val < l2->val) {
                root = current = l1;
                l1 = l1->next;
            } else {
                root = current = l2;
                l2 = l2->next;
            }
        }

        while (l1 and l2) {
            if (l1->val < l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        
        current->next = l1 == NULL ? l2 : l1;

        return root;
    }
};
