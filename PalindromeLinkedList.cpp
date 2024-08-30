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
    bool isPalindrome(ListNode* head) {
        // given:
        // given the head of singly linked list

        // goal:
        // determine if linked list is a palindrome

        // return:
        // return boolean result

        // logic:
        // create two pointers, one fast, one slow
        // using the slow pointer, find the middle point of the list
        // reverse the pointers on the second half of the linked list
        // now you have a linked list where the head and the end lead to the mid point
        // compare head and end nodes while traversing towards the mid point
        // if they are not equal at any point return false
        // otherwise return true

        ListNode* fast = head;
        ListNode* slow = head;

        // find mid point
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        // reverse the second half of the linked list
        ListNode* previousNode = NULL;
        while (slow)
        {
            ListNode* temp = slow->next;
            slow->next = previousNode;
            previousNode = slow;
            slow = temp;
        }

        // check and compare head and end pointers
        ListNode* left = head;
        ListNode* right = previousNode;
        while (right)
        {
            if (left->val != right->val) return false;

            left = left->next;
            right = right->next;
        }
        return true;
    }
};