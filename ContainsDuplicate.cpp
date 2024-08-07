class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // give:
        // an array of integers called nums

        // goal:
        // determine if any of the elements in the array appear more than once
        // if true return true
        // otherwise false 

        // return:
        // boolean result 

        // logic:
        // can create either a hash map or set
        // hash map route: iterate through nums keep track of the elements value and count them to the map
        // keeping track of what elements have been seen and how many times it has appeared

        // hash set route: similar to map however only keeps track of what elements have been seen and not the count


        // hash map approach:
        // create hash map seen
        using hashMap_t = unordered_map<int, int>;
        hashMap_t seen;

        for (int element : nums) // iterate through nums array
        {
            if (seen.count(element) > 0) return true; // checks if element is in seen, if true checks count is >=1

            seen[element]++; // if element is not in seen add it to seen and increase its count one
        }

        return false;


        /*
        // hash set approach:
        using hashSet_t = unordered_set<int>;
        hashSet_t seen;

        for (int element : nums)
        {
            if (seen.count(element) > 0) return true;

            seen.insert(element);
        }

        return false;
        */
    }
};