#include <string>
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Given:
        // A string pattern which only contains lower-case english letters
        // A string s which contains only lower-case english letters and spaces, with no leading or trailing spaces
        // All words in s are sperated by a single space

        // Goal:
        // Determine if there is a bijection between a letter in pattern and a non-empty word in s

        // Return:
        // return true if given string s follows the same pattern as the given string pattern

        // logic:
        // check if number of words in s are equal to number of char in pattern
        // create a hashmap
        // each word in s will point to a letter in pattern
        // if different words in s point to the same letter in s return false
        // otherwise return true

        unordered_map<string, char> wordToLetter;
        unordered_map<char, string> letterToWord;

        string word;
        int count = 1;
        int index = 0;

        // for loops that counts the amount of words in s
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                count++;
            }
        }
        // check if number of words is equal to number of char in pattern, if false return false, otherwise continue
        if (count != pattern.size()) return false;

        // for loop that iterates through string s
        for (int i = 0; i < s.size(); i++) {
            // construct each word
            if (s[i] != ' ') {
                word += s[i];
            }

            // if current index is a space or at the end of the string s do the following
            if (s[i] == ' ' || i == s.size() - 1) {
                // checks if constructed word or letter exists in hashtable, 
                // is yes check if that word or letter points to the current char in pattern or the currently constructed word,
                // if true continue, otherwise return false.
                if (wordToLetter.count(word) && wordToLetter[word] != pattern[index] ||
                    letterToWord.count(pattern[index]) && letterToWord[pattern[index]] != word) {
                    return false;
                }

                // have each word point to a letter in pattern, and a letter point to a word
                wordToLetter[word] = pattern[index];
                letterToWord[pattern[index]] = word;

                // move to next char in pattern and clear string for next word
                index++;
                word.clear();
            }
        }

        return true;

    }
};