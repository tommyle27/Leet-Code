class Solution {
public:
    bool isPalindrome(string s) {
        int frontChar = 0;
        int endChar = s.size() - 1;

        while (frontChar <= endChar) {
            if (!isalnum(s[frontChar])) {
                frontChar++;
                continue;
            } if (!isalnum(s[endChar])) {
                endChar--;
                continue;
            } if (tolower(s[frontChar]) != tolower(s[endChar])) {
                return false;
            }
            else {
                frontChar++;
                endChar--;
            }
        }

        return true;

    }
};