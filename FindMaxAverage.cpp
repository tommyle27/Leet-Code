class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // given:
        // given an integer array "nums"
        // nums contains n elements
        // given an integer "k"
        // CONTSTRAINS:
            // n == nums.size()
            // 1 <= k <= 10^5
            // -10^4 <= nums[i] <= 10^4

        // goal:
        // find a contiguous subarray whose length is equal to k and has a max average value

        // return:
         // return the max average value

        // logic:
        // use the sliding window method
        // k is used as the the window size
        // iterate through the array until window size is reached while calculating the sum 
        // after window size is reached, shift the window down by one element 
            // i.e. 0-4 -> 1->5
        // new sum will be calculated by adding the next element (5), and removing the last element (0)
        // this calculates the current windows sum
        // compare this sum with the last and find the last max
        // after finding the max sum, return the max sum / 4

        double maxSum = INT_MIN;
        double currentSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i < k) {
                currentSum += nums[i];
            }
            else {
                maxSum = max(currentSum, maxSum);
                currentSum += nums[i] - nums[i - k];
            }
        }

        return max(currentSum, maxSum) / k;

    }
};