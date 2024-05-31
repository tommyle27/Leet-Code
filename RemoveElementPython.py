class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        #Given:
        # Integer array nums
        # integer target val

        #Goal:
        # Remove all occurences of val in the nums array
        # Maintain order, all numbers != val in nums should be first

        #Return:
        # return nums new size after all occurences of val have been removed

        index = 0

        for x in range(len(nums)):
            if nums[x] != val:
                nums[index] = nums[x]
                index += 1
                print(index)

        print(nums)
        return index