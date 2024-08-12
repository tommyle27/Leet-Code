class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // given:
        // given an array of n integers called nums
        // array nums ranges from [1, n]

        // goal:
        // find all numbers not in nums and return an array withthose numbers

        // return:
        // return array of call integers in range of [1, n] that do not appear in nums

        // logic:
        // place all possible elements at their right index position
        // iterate over nums
        // for each element, if the correct index place is not occupied by the element
        // then we place that element at its correct index place
        // we will achieve this by swaping the element with the element at its correct index
        // this is repeated for all elements in nums
        // the indexes not occupied by the right number are added to a new array and returned

        using array_t = vector<int>;
        array_t answer;

        for (auto& element : nums)
        {
            while (element != nums[element - 1])
            {
                swap(element, nums[element - 1]); // swap till correct index place of element is not occupied by the element itself
            }
        }

        for (int i = 1; i <= size(nums); i++)
        {
            if (i != nums[i - 1]) answer.push_back(i);
        }

        return answer;
    }
};