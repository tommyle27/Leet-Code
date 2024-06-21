using namespace std;
#include <stack>
#include <algorithm>
#include <iostream>

class Solution {
public:
    bool isValid(string s) {
        //Given:
        // string s containing (), {}, []

        //Goal:
        // determine if input string s is valid
        // valid:
            // 1. Open brackets must be closed by the same bracket
            // 2. Open Brackets must be closed in the correct order
            // 3. Every close bracket has a corresponding open bracket of the same type

        //Return:
        // true if valid, otherwise false

        // Logic:
        // create stack to store brackets
        // iterate through string storing each open bracket into stack
        // if top open bracket in stack is same type as closing bracket
        // pop open bracket from stack and continue

        // if closing bracket is not same type and not in correct order: return false
        // if stack is not empty by the end, then uneven number of brackets: return false
        // otherwise return true

        stack<char> stack;

        for (char character : s) {
            if (character == '(' || character == '{' || character == '[') {
                stack.push(character);
            }
            else {
                if (stack.empty() || (stack.top() == '(' && character != ')') ||
                    (stack.top() == '{' && character != '}') || (stack.top() == '[' && character != ']')) {
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();

    }
};