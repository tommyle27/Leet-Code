class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int index = 0;
        /*
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
                cout << "index: " << index << "\n";
                cout << "value: " << nums[i] << "\n";
            }
        }
        */

        for (int element : nums) {
            if (element != val) {
                nums[index] = element;
                index++;
            }
        }

        return index;
    }
};