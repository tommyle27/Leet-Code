class Solution {
public:
    int search(vector<int>& nums, int target) {
        // given:
        // given an array of integer nums sorted in ascending order
        // given a target interger value target

        // goal:
        // using binary search method bind the target value

        // return:
        // return the index of the target value if found
        // otherwise return -1

        // logic;
        // create left and right variables pointing to the left and right most value of the
        // while the left < right
        // caclulate the middle point
        // if target value < middle value update right to be middle index
        // if target value > middle value update left to be middle + 1 index
        // if target value == middle value return middle index
        // otherwise return -1

        int left = 0;
        int right = size(nums) - 1;

        while (left <= right)
        {
            int middle = left + (right - left) / 2;

            if (nums[middle] < target) {
                left = middle + 1;
            }
            else if (nums[middle] > target) {
                right = middle - 1;
            }
            else {
                return middle;
            }

        }

        return -1;
    }
};