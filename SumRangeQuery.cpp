class NumArray {
public:
    // Given:
    // Given Integer Array nums

    // Goal:
    // calculate the sum of the elements of nums between indices left and right INCLUSIVE left <= right

    // Return:
    // sum of elements of nums between indices left and right

    // logic:
    // prefix sum approach
    // create a new array prefix
    // calculate the sum of the elements 0 to n in O(n) time
    // store the result in prefix array
    // example:
        // nums = [0, 1, 4, 2];
        // prefix = [0, 0+1, 0+1+4, 0+1+4+2];
    // thus prefix = [0, 1, 5, 7]; 

    // to return the sum of any subarray return prefix[right] - prefix[left-1]
    // example:
        // return range sum left = 1, right = 3
        // nums[1] = 1 
        // nums[2] = 4
        // nums[3] = 2
        // nums[1-3] = 7 which also equals prefix[3]

        // return range sum left = 2, right = 3
        // nums[2] = 4
        // nums[3] = 2
        // sum = 6, prefix[right] - prefix[left-1] = 7 -1 = 6

    vector<int>& prefix;

    NumArray(vector<int>& nums) : prefix(nums) {
        // this function initalizes the object with the integer array nums
        int sum = 0;

        for (int i = 0; i < size(nums); i++)
        {
            sum += nums[i];
            prefix[i] = sum;
        }

    }

    int sumRange(int left, int right) {
        // returns the sum of the elements of nums between indices left and right INCLUSIVE
        if (left == 0) return prefix[right];

        return prefix[right] - prefix[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */