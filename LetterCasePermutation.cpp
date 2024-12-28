class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        // given:
        // given a string "s"
        // CONSTRAINTS:
            // 1 <= s.size() <= 12
            // s consists of lower-case English letters, Upeercase letters and digits

        // goal:
        // Create an array that stores all the possible strings we could create given the string
        // possible strings include changes in individual characters of "s" to be either lower or upper-case

        // return:
        // return an array containing all possible permutations of s

        // logic:
        // backtracking
        // create branches of the of the original s differing in letter case differnce
        // continue branching and changing letter case until all permuations have been created and added to array
        vector<string> answer;
        backtrack(s, answer, 0);
        return answer;

    }

    void backtrack(string& s, vector<string>& answer, int i) {
        if (i == s.size()) {
            answer.push_back(s);
            return;
        }

        char character = s[i];

        // branch when current character is a letter:
        if (islower(character)) {
            s[i] = toupper(character);
        }
        else {
            s[i] = tolower(character);
        }

        backtrack(s, answer, i + 1);

        // if character is not a letter move to next index:
        if (isalpha(character)) {
            s[i] = character;
            backtrack(s, answer, i + 1);
        }
    }
};