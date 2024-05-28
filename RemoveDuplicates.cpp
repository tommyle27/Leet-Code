class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int index = 1;

        for (int element = 1; element < nums.size(); element++) {
            if (nums[element] != nums[element - 1]) {
                nums[index] = nums[element];
                index++;
            }
        }

        return index;

    }
};