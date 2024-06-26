#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        // Given:
        // given absolute path for Unix-file system which beings with '/'

        // Unix-style file:
        // a '.' signifies the current directory
        // a '..' denotes moving up one directory level
        // multiple slashes such as '//' are interpreted as a single slash

        // Rules and Constraints:
        // path contains english letters, digits, '.', '/' and '_'
        // path must start with '/'
        // directories within the path should be seperated by '/'
        // should not end with '/'
        // it should exclude any single or double periods used to denote current or parent directories

        // Goal:
        // traverse through string path
        // update path string based on rules and contraints

        // Return:
        // new path

        // Logic:
        // create stack for the new valid path
        // create string for valid names
        // interate through each character in the path string

            // fill stack with slashes and periods and valid names

            // if stack.current == '/' continue

            // while path.current() is not '/' add character to temperary string

            // if temp string == '.' continue
            // if temp string == '..' and stack isnt empty
                // stack.pop(top)
            // otherwise push the temp string to the stack

            // while stack isnt empty path string = '/' +stack.top + string
                // pop top of stack

            // if string.size() == 0 return '/'

            //return string

        // code:

        stack<string> pathStack;
        string pathString;

        for (int current = 0; current < path.size(); current++) {
            if (path[current] == '/') continue;

            string tempString;

            while (current < path.size() && path[current] != '/') {
                tempString += path[current];
                current++;
            }

            if (tempString == ".") continue;
            else if (tempString == "..") {
                if (!pathStack.empty()) {
                    pathStack.pop();
                }
            }
            else {
                pathStack.push(tempString);
            }
        }

        while (!pathStack.empty()) {
            pathString = "/" + pathStack.top() + pathString;
            pathStack.pop();
        }

        if (pathString.size() == 0) return "/";

        return pathString;
    }
};