# List comprehension
class Solution:
    def reverseWords(self, s: str) -> str:
        rwords = s.split()[::-1]
        temp_list = [w + ' ' if i < len(rwords) - 1 else w for i, w in enumerate(rwords)]
        return ''.join(temp_list)