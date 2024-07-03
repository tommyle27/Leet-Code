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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Given:
        // two non-empty linked lists representing two non-negative integers
        // the digits are stored in reverse order
        // each node contains a single digit 

        // Goal:
        // order the digits in the correct order
        // add the two number together 

        // Return:
        // return the sum of the linked lists

        // logic:
        // travers through the linked lists starting from the back
        // add digits together and find the carry value
        // delete the digit and move on to the next
        // return the final result

        ListNode* pointer = new ListNode(0);
        ListNode* currentNode = pointer;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int firstDigit = (l1 != NULL) ? l1->val : 0;
            int secondDigit = (l2 != NULL) ? l2->val : 0;

            int sum = firstDigit + secondDigit + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            currentNode->next = newNode;
            currentNode = currentNode->next;

            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        }

        ListNode* result = pointer->next;
        delete pointer;
        return result;
    }
};