class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // given:
        // given an array of characters called "letters" sorted in ascending order
        // array letters contains at least two different characters (lowercase english)
        // given a a target character "target" also a lowercase english letter

        // goal:
        // find the smallest character that is lexicographically greater than the target
        // or the smallest character thats ASCII dec imal is greater than target

        // return:
        // return the smallest charcter thats larger than target

        // logic:
        // use binary search

        int left = 0;
        int right = size(letters) - 1;

        while (left < right)
        {
            int middle = left + (right - left) / 2;

            if (letters[middle] == target || letters[middle] < target)
            {
                left = middle + 1;
            }
            else if (letters[middle] > target) {
                right = middle;
            }
        }

        if (letters[left] > target) return letters[left];

        return letters[0];
    }
};