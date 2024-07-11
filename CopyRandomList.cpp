/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Given:
        // given a linked list with a length of n
        // each node contains a random pointer
        // a pointer can point to any node in the list or NULL
        // Given the head of the original list

        // Goal:
        // Copy List with random pointer
        // Create a deep copy of the list
        // copy should consist of exactly n brand new nodes
        // each node has its value set to the value of its corresponding original node
        // next and random pointer of the new nodes should point to the new nodes in the copied lists
        // pointers in the original lists and copied lists represent the same list state
        // NO POINTERS IN THE NEW LIST SHOULD POINT TO NODES IN THE ORIGNIAL LIST

        // Return:
        // A deep copy of the list

        // Logic:
        // iterate through the linked lists and copy the nodes
        // iterate a second time to copy the pointers (next, and random)

        Node* currentNode = head;

        while (currentNode) {
            Node* copyNode = currentNode->next;
            currentNode->next = new Node(currentNode->val);
            currentNode->next->next = copyNode;
            currentNode = copyNode;
        }

        currentNode = head;

        while (currentNode) {
            if (currentNode->random) {
                currentNode->next->random = currentNode->random->next;
            }
            currentNode = currentNode->next->next;
        }

        Node* result = new Node(0);
        Node* dummyNode = result;

        while (head) {
            dummyNode->next = head->next;
            dummyNode = dummyNode->next;

            head->next = head->next->next;
            head = head->next;
        }
        return result->next;
    }
};