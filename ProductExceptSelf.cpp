class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // given:
        // given an integer array called "nums"

        // goal:
        // fill an array called "answer" such that answer[i] is equal to the product of all the elements
        // in nums expect nums[i]

        // return:
        // return an array "answer"

        // logic:
        // create a zero counter, if zeroCount > 1 answer[] = {0}
        // find the procuct of nums exluding all 0s
        // if zeroCount == 0 answer[i] = product/nums[i]
        // if zeroCount == 1 and if nums[i] == 0 then answer[i] = product else answer[i] = 0;

        int zeroCount = count(begin(nums), end(nums), 0);
        int product = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) product *= nums[i];
        }

        std::cout << zeroCount << std::endl;
        std::cout << product << std::endl;

        if (zeroCount > 1) return vector<int>(nums.size());

        for (auto& element : nums) {
            if (zeroCount == 1) {
                if (element == 0) element = product;
                else element = 0;
            }
            else {
                element = product / element;
            }
        }

        return nums;
    }
};