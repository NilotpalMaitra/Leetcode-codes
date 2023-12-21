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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
        return false;

        ListNode *first = head;
        ListNode *last = head;

        while (first!= NULL && first->next != NULL)
        {
            first = first->next->next;
            last = last ->next;

            if (first == last)
            return true;
        }
        return false;
    }
};