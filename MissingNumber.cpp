class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // given:
        // an array of distinct integers called nums
        // nums contains n distinct numbers in the range [0, n]

        // goal:
        // the number of elements determines the range
        // if the array has does not contain a number belonging to that range return that number

        // return:
        // missing number (int)

        // logic:
        // the size of the array can be represented by the sum of its range
        // summation of [0,n] numbers can be represented by the summation formula n(n+1)/2
        // by subtracting all appearing numbers in nums from the total sum
        // you can find missing number

        int totalSum = nums.size() * (nums.size() + 1) / 2;

        for (int element : nums)
        {
            totalSum -= element;
        }

        return totalSum;
    }
};