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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dum = new ListNode();
        dum->next = head;

        ListNode* curr = dum;
      
        while (curr->next) {
            if (curr->next->val == val)  
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return dum->next;
    }
};