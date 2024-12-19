class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // given:
        // given an unsorted array of integers "nums"
        // write a program that runs in O(n) time
        // 0 <= nums.size() <= 10^5
        // -10^9 <= nums[i] <= 10^9 

        // goal:
        // find the length of the longest consecutive elements sequence

        // return:
        // return the length of the longest sequence

        // logic:
        /*
        - use hashmap
        -
        */

        unordered_set<int> hashSet;
        int maxCount = 0;

        for (int element : nums) {
            hashSet.insert(element);
        }

        for (int element : nums) {
            if (hashSet.find(element - 1) == hashSet.end()) {
                int currentElement = element;
                int currentCount = 1;
                hashSet.erase(element);

                while (hashSet.find(currentElement + 1) != hashSet.end()) {
                    currentElement++;
                    currentCount++;
                }

                maxCount = max(maxCount, currentCount);
            }
        }

        return maxCount;
    }
};