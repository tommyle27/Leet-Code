class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // given:
        // given and array of integers called "nums"
        // given an integer tartget called "target"
        // CONSTRAINTS:
            // 2 <= num.size() <= 10^4
            // -10^9 <= nums[i] <= 10^9
            // -10^9 <= target <= 10^9
            // EACH INPUT WILL HAVE EXACTLY ONE SOLUTION

        // goal:
        // find the indices whose values sum up to the target

        // return:
        // return an array of indices 

        // logic:
        // use hash map
        // nums[?] + nums[?] = target
        // target - nums[?] = nums[?]

        map<int, int> answer;

        for (int i = 0; i < nums.size(); i++)
        {
            // check if if target - nums[i] is in the hash map
            if (answer.count(target - nums[i]) > 0) return { i, answer[target - nums[i]] };

            // if its not in the hash map then update the map
            answer[nums[i]] = i;
        }

        return {};
    }
};