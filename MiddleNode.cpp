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
    ListNode* middleNode(ListNode* head) {
        // given:
        // given the head of the signly linked list

        // goal:
        // return the middle node of the list

        // return:
        // return node

        // logic:
        // use two pointers, slow and fast
        // fast pointer travels through list 2 nodes each iterations
        // slow pointer travels one node at a time
        // fast pointer is 2x faster than slow pointer
        // when fast pointer reaches end of list
        // slow pointer will have only traveled half way

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;

    }
};