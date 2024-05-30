class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        frontChar = 0
        endChar = len(s)-1

        while (frontChar <= endChar):
            if not s[frontChar].isalnum():
                frontChar += 1
                continue
            if not s[endChar].isalnum():
                endChar -= 1
                continue
            if s[frontChar].lower() != s[endChar].lower():
                return False
            else:
                frontChar += 1
                endChar -= 1

        return True 
        