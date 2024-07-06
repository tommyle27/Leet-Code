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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Given:
        // Given the heads of two sorted lists
        // list1 and list2

        // Goal:
        //9 merge the two lists into one osrted lists

        // Return:
        // return the head of the merged linked list

        // Logic:
        // create two pointers the traverse through both lists
        // check if one of the linked lists is empty, if one is empty return the other list
        // if the value of the head of list1 is less than list2->val,
        // assign the list1 pointer to its next node
        // otherwise assign the dummy node to the list2 node and assign list2 node to its next one

        // while both lists are not empty if list1 node is less than list2
        // the currentpointer->next equals that lower node, update the list1 node to its next
        // otherwise currentpointer-> equals the lowernode list2 and update list2 node to its next
        // then assign the currentpointer to point to the next position in the list

        // perform a final check to see if either list is not empty
        // if one is not empty add the other list to the end of the list  

        ListNode* PointerOne = list1;

        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        if (list1->val < list2->val) {
            list1 = list1->next;
        }
        else {
            PointerOne = list2;
            list2 = list2->next;
        }

        ListNode* CurrentPointer = PointerOne;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                CurrentPointer->next = list1;
                list1 = list1->next;
            }
            else {
                CurrentPointer->next = list2;
                list2 = list2->next;
            }

            CurrentPointer = CurrentPointer->next;
        }

        if (!list1) {
            CurrentPointer->next = list2;
        }
        else {
            CurrentPointer->next = list1;
        }

        return PointerOne;
    }
};