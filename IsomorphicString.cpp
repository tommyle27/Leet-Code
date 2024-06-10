class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Given:
        // string s that consists of ascii character
        // String t that consists of ascii character


        // Goal:
        // Determine of the two strings s and t are isomorphic
        // isomorphic: two strings are isomorphic if the characters in s can be replaced to get t


        // Return: 
        // return true of s and t are isomorphic

        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for (int i = 0; i < s.size(); i++) {
            char charS = s[i];
            char charT = t[i];

            if (mapS.count(charS) && mapS[charS] != charT || mapT.count(charT) && mapT[charT] != charS) {
                cout << charS << " points to " << charT << '\n';
                cout << charT << " points to " << charS << '\n';
                return false;
            }

            mapS[charS] = charT;
            mapT[charT] = charS;

            cout << charS << " points to " << charT << '\n';
            cout << charT << " points to " << charS << '\n';

        }

        return true;

    }
};