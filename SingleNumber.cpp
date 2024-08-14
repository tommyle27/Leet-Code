class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // given:
        // given non-empty array of integers nums

        // goal:
        // every element in nums appears twice expect one
        // find the element that appears only once

        // return:
        // the element that appears only once in nums

        // logic:
        // using XOR bit manipulation
        // traverse the array and take the bitwise XOR of each element
        // return the value

        int answer = 0;

        for (auto element : nums)
        {
            answer ^= element;
        }
        return answer;

    }
};