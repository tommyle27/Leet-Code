class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // given:
        // given an array of integers called "nums"
        // nums contains n+1 integers 
        // each integer ranges from [1, n]
        // ONLY ONE REPEATED NUMBER IN NUMS

        // goal:
        // find the repeated number in nums

        // return:
        // return the repeated integer

        // logic:
        // cerate a hash map
        // store every value and its frequency
        // if a values frequency is greater than 1 return that value/integer

        unordered_map<int, int> hashMap;

        for (int element = 0; element < nums.size(); element++) {
            hashMap[nums[element]]++;
            //std::cout << "Current Element: " << element << " Count: " << hashMap[element] << std::endl;
        }

        for (auto value : hashMap) {
            //std::cout << "hashMap.first: " << value.first << " hashMap.second: " << value.second << std::endl; 
            if (value.second >= 2) return value.first;
        }

        return -1;
    }
};