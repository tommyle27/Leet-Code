class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // given:
        // given an array of integers of length n called "nums"
        // values range from [1, n]
        // each integers appears AT MOST TWICE

        // goal:
        // return an array of all the integers that appear twice

        // return:
        // return array of integers

        // logic:
        // create hash map keep track of frequency of each element

        unordered_map<int, int> hashMap;
        vector<int> answer;

        for (auto element : nums) {
            hashMap[element]++;
        }

        for (auto element : hashMap) {
            if (element.second == 2) answer.push_back(element.first);
        }

        return answer;

    }
};