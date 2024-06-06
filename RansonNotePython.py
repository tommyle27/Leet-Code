class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        magazineCounter =  Counter(magazine)  
        ransomNoteCounter = Counter(ransomNote)

        if magazineCounter & ransomNoteCounter == ransomNoteCounter:
            return True

        return False