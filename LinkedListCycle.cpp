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
    bool hasCycle(ListNode* head) {
        // Given:
        // given head->head of linked list
        // next pointer points to next node connected to current head
        // pos, the index of the node that tail's next pointer is connected to

        // Goal:
        // determine if the linked list has a cycle

        // Return:
        // boolean value, true if cycle exists, false otherwise

        // Logic:
        // using constant memory
        // create two pointers
        // both pointers traverse through the linked list
        // pointer 1 traverses through each node
        // pointer 2 traversed through every other node
        // pointer 2 travels through linked list faster than pointer 1
        // if a cycle exists, pointer 1 and 2 will eventually point to the same node
        // if pointer 1 and 2 point to the name node cycle exists; return true
        // otherwise return false

        if (head == NULL) {
            return false;
        }

        ListNode* firstPointer = head;
        ListNode* secondPointer = head->next;

        while (secondPointer != NULL && secondPointer->next != NULL && firstPointer != NULL) {
            if (firstPointer == secondPointer) {
                return true;
            }

            secondPointer = secondPointer->next->next;
            firstPointer = firstPointer->next;
        }

        return false;
    }
};