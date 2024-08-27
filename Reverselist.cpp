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
    ListNode* reverseList(ListNode* head) {
        // given:
        // given the head of a singly linked list

        // goal:
        // reverse the list

        // return:
        // singly linked list 

        // logic:
        // create three pointers, head, headPrevious, and headNext
        // using these three pointers we will iterate through the list
        // reassign the nodes pointers such that the heads previous becomes its next
        // and the heads next becomes its previous
        // this will essentially reverse the singly linked list

        ListNode* previousNode = NULL;
        ListNode* nextNode;

        while (head != NULL)
        {
            nextNode = head->next;
            head->next = previousNode;
            previousNode = head;
            head = nextNode;
        }

        return previousNode;
    }
};