class Solution {
public:
    int calculate(string s) {
        // given:
        // string s - represents a valid expressions
        // string only consists of digits, '(',  ')', '+',  '-' and ' '

        // goal:
        // evaluate and calculate the string as a math problem

        // return:
        // return the appropriate answer after calculating 

        // logic:
        // initialize two variables sum and sign
        // traverse through the string and if the character is a digit
        // add the digit to the variable "sum"
        // if the character is '(' save the current state of sum and sign in stack
        // if the character is ')' sum = top value of stack + (sign * sum) then pop
        // if character is '-' toggle sign

        stack<pair<int, int>> store;
        long long int sum = 0;
        int sign = +1;

        for (int i = 0; i < s.size(); i++)
        {
            char current = s[i];

            if (isdigit(current))
            {
                long long int number = 0;

                while (i < s.size() and isdigit(s[i]))
                {
                    number = (number * 10) + s[i] - '0';
                    i++;
                }
                i--;
                sum += (number * sign);
                sign = +1;
            }
            else if (current == '(')
            {
                store.push(make_pair(sum, sign));

                sum = 0;
                sign = +1;
            }
            else if (current == ')')
            {
                sum = store.top().first + (store.top().second * sum);
                store.pop();
            }
            else if (current == '-')
            {
                sign = (-1) * sign;
            }
        }
        return sum;
    }
};