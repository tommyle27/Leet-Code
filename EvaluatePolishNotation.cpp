class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // given:
        // given an array of strings "tokens"
        // array represents an arithmetic expression in a reverse polish notation

        // goal:
        // evaluate reverse polish notation

        // return:
        // return the final expression in integer form of the equation

        // logic:
        // create a stack that stores the elements
        // create variables that store a value
        // iterate through tokens stack, store any integery type elements in a stack
        // if element in tokens stack is an operator perform appropriate calculations 
        // with the integers elements stored in stack, store current value to some variable
        // continue until tokens stack is empty and all calcuations have been performed.

        stack<int> stackValues;
        int value1, value2;

        for (auto& i : tokens)
        {
            if (i == "+" || i == "-" || i == "*" || i == "/")
            {
                value1 = stackValues.top();
                stackValues.pop();

                value2 = stackValues.top();
                stackValues.pop();

                if (i == "+")
                {
                    value2 += value1;
                }
                if (i == "-")
                {
                    value2 -= value1;
                }
                if (i == "*")
                {
                    value2 *= value1;
                }
                if (i == "/")
                {
                    value2 /= value1;
                }

                stackValues.push(value2);

            }
            else {
                stackValues.push(stoi(i));
            }
        }

        return stackValues.top();

    }
};