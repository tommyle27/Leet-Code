class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        total = 0
        answer = float("inf")

        for right in range(len(nums)):
            total += nums[right]

            while total >= target:
                answer = min(right-left+1, answer)
                total -= nums[left]
                left += 1

        if answer == float("inf"):
            return 0

        return answer