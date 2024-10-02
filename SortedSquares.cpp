class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // given:
        // given an array of sorted integers called "nums" 
        // CONSTRAINTS:
            // 1 <= nums.size() <= 10^4
            // -10^4 <= nums[i] <= 10^4
            // nums osrted in non-decreasing order

        // goal:
        // square each element in the array then sort it and return

        // return:
        // return the newly squared and sorted array

        // logic:
        // two pointers
        // first using two pointers swap elements such that they are placed in non-descending order
        // this will be performed by comparing the absolute value of the first and last elements in the sorted array
        // then store the larger element in the new array after squaring it.

        int size = nums.size();
        vector<int> newNums(size);
        int index = 0;
        int lastIndex = size - 1;

        // first swap around the elements
        for (int i = size - 1; i >= 0; i--) {
            if (abs(nums[lastIndex]) > abs(nums[index])) {
                newNums[i] = nums[lastIndex] * nums[lastIndex];
                lastIndex--;
            }
            else {
                newNums[i] = nums[index] * nums[index];
                index++;
            }
        }

        return newNums;
    }
};