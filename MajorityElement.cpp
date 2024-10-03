class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // given:
        // given an array of integers called "nums"
        // Constraints:
            // n == nums.size()
            // 1 <= n <= 5 * 10^4
            // -10^9 <= nums[i] <= 10^9

        // goal:
        // find the majority elements
        // the majority element is an elements that appears more than n/2 times
        // may assume that a majority element always exists
        // solve in O(n) time and O(1) space

        // return:
        // return the majority element

        // logic:
        // majority element will appear [n/2] + 1 times
        // therefore more than have the array will consists of a repeating element

        int majorityElement = nums[0];
        int counter = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (counter == 0) {
                majorityElement = nums[i];
            }

            if (majorityElement == nums[i]) {
                counter++;
            }
            else {
                counter--;
            }

        }

        return majorityElement;

    }
};