#include <algorithm>
#include <iostream>
#include <vector>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Given:
        // Array of intervals: intervals[i] = [starti, endi]

        // Goal:
        // merge all overlapping intervals

        // Return:
        // return an array of the non-overlapping intervals taht cover all the intervals in the input

        // create a new array
        vector<vector<int>> merged;

        //sort input
        sort(intervals.begin(), intervals.end());

        if (intervals.size() == 1) return intervals;

        int start = 0;
        int end = 1;

        // interate through for loop
        for (int i = 0; i < intervals.size(); i++) {

            // check if newly created array is empty
            // check if last range in new array end value is less than start value of input array
            // if true no overlap, add to range to new array
            if (merged.empty() || merged.back()[end] < intervals[i][start]) {
                merged.push_back(intervals[i]);
            }
            else { // otherwise there is an overlap
                merged.back()[end] = max(merged.back()[end], intervals[i][end]);
            }
        }

        //return newly merged array 
        return merged;
    }
};