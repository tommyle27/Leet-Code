class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //Given:
        /*
            - Positive Integer Array nums
            - An integer target
        */

        //Goal:
        /*
            - Find the minimal length of a subarray whose sum is >= target
        */

        //Return:
        /*
            - return the minimal length of the subarray whose sum is >= target
        */

        int currentPointer = 0;
        int lastPointer = 0;
        int sum = 0;
        int answer = INT_MAX;

        while (currentPointer < nums.size()) {
            sum += nums[currentPointer];

            while (sum >= target) {
                sum -= nums[lastPointer];
                answer = min(currentPointer - lastPointer + 1, answer);
                lastPointer++;
            }
            currentPointer++;
        }

        if (answer == INT_MAX) {
            return 0;
        }

        return answer;

    }
};