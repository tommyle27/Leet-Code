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
    ListNode* deleteDuplicates(ListNode* head) {
        // given:
        // a sorted list in increasing order
        // node values belong in the range of (-100, 100)
        // given the head of a sorted linked list

        // goal:
        // find all duplicaltes and delete them such that each element only appears once

        // return:
        // new sorted linked list (return head)

        // logic:
        // fast and slow pointer
        // in place removal
        // create previousNode, current and next pointers
        // traverse through the sorted linked list
        // if current->val == next->val
        // remove current node, next becomes current, next->next becomes next, and perviousNode points to new current
        // if current->val != next->val
        // shift pointers until current or current->next is NULL 

       // if list is empty just return head of the list
        if (head == NULL) return head;

        ListNode* removeNode;
        ListNode* current = head;

        while (current && current->next)
        {
            if (current->val == current->next->val)
            {
                removeNode = current->next;
                current->next = current->next->next;
                delete removeNode;
                continue;
            }
            current = current->next;

        }
        return head;
    }
};