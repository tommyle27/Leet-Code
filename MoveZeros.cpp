class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // given:
        // given an array of integers called "nums"
        // Constraints:
            // 1 <= nums.size() <= 10^4
            // -2^31 <= nums[i] <= 2^31 - 1

        // goal:
        // move all 0s to the end of the array while maintaining order

        // return:
        // new arranged array

        // logic:
        // use pointers
        // in-place arrangment

        if (nums.size() == 1) {
            return;
        }

        int zero = 0;

        for (int switchIndex = 1; switchIndex < nums.size(); switchIndex++) {
            if (nums[zero] != 0) zero++;

            int save = nums[zero];
            nums[zero] = nums[switchIndex];
            nums[switchIndex] = save;
        }

        return;
    }
};