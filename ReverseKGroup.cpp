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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // given:
        // head of the linked list "head"
        // integer 'k' that represents the size of the group of nodes that you
        // reverse

        // goal:
        // given integer k, reverse a group of nodes of size k throughout the 
        // linked linked

        // return:
        // return the modified linked list

        // logic:
        // create a dummy node
        // create three pointers
        // previous, current, next
        // create variables called left,
        // iterate from left to k using the three pointers
        // swap/reverse the nodes left - k times
        // update left to next node and repeat until linked list
        // is reversed

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* before = dummy;
        ListNode* after = head;
        ListNode* current = NULL;
        ListNode* previous = NULL;
        ListNode* next = NULL;

        while (true)
        {
            ListNode* pointer = after;

            for (int i = 0; i < k; i++)
            {
                if (pointer == NULL) return dummy->next;

                pointer = pointer->next;
            }

            current = after;
            previous = before;

            for (int i = 0; i < k; i++)
            {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }


            after->next = current;
            before->next = previous;
            before = after;
            after = current;
        }

    }
};