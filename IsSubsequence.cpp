class Solution {
public:
    bool isSubsequence(string s, string t) {
        // given:
        // given two strings "s" and "t"
        // Constraints:
            // 0 <= s.size(), t.size() <= 100
            // s and t consists of ONLY lower english letters

        // goal:
        // determine if string "s" is a subsequence of "t"
        // i.e. string "s" can be formed by deleted n characters from string "t" 

        // return:
        // return boolean result

        // logic:
        // use two pointers
        // assign one pointer to string "s"
        // assign one pointer to string "t"
        // iterate through string "t"
        // if string "s" pointer is equal to the current pointer in string "t"
        // move "s" pointer to next character
        // continue iteration until end of string "t" is reached

        // BASE CASE:
        if (s.size() > t.size()) return false;

        int pointerS = 0;

        for (int pointerT = 0; pointerT < t.size(); pointerT++) {
            if (s[pointerS] == t[pointerT]) {
                pointerS++;
            }
        }

        if (pointerS < s.size()) return false;

        return true;
    }
};