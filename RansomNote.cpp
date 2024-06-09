class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //Given:
        // String ransomNote
        // String magazine

        //Goal:
        // check if ransomNote can be created by using letters from magazine

        //Return:
        // return true of ransomNote can be created from magazine, false otherwise

        // Create an array of size 26 that represents each letter a-z
        int letters[26] = { 0 };

        // Create a for loop that counts the number of occurences of each letter in magazine store that count in array
        for (int i = 0; i < magazine.size(); i++) {
            letters[magazine[i] % 97]++;
        }

        // Create a for loop that subtracks each letter occurence in ransomeNote from the array
        for (int i = 0; i < ransomNote.size(); i++) {
            letters[ransomNote[i] % 97]--;
        }

        // Create a for loop that checks the array, if the count of any letter is less than 0 than magazine did not 
        // have sufficient amount of letters to create the ransomNote
        for (int i = 0; i < 26; i++) {
            if (letters[i] < 0) {
                return false;
            }
        }
        return true;
    }
};