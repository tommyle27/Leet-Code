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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // Given:
        // given the head of a singly linked list
        // two integers, where left <= right
        // int left 
        // int right

        // Goal:
        // reverse the nodes of the list from the left to right position

        // Return:
        // return the reversed list

        // Logic:
        // create a dummy node to deal with cases when left = 1
        // create three pointers to keep track of the current node, the previous and the next
        // moving from left to right, disconnect the current node from the list while saving this node
        // during this interation, set the previous node to point to the right node
        // and assign the right node to point to the left's next node

        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode* previous = dummyNode;

        // find actual pervious node from left and assign it to previous
        for (int i = 0; i < left - 1; i++)
        {
            previous = previous->next;
        }

        // create pointer that points to current node after finding appropriate previous node from left
        ListNode* current = previous->next;

        for (int i = 0; i < right - left; i++)
        {
            ListNode* nextNode = current->next;
            current->next = nextNode->next;
            nextNode->next = previous->next;
            previous->next = nextNode;
        }
        return dummyNode->next;
    }
};