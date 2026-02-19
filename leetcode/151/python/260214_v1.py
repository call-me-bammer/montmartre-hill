class Solution:
    def reverseWords(self, s: str) -> str:
        words = list(map(str, s.rstrip().split()))
        rwords = words[::-1]
        output = ''
        for i, w in enumerate(rwords):
            output += w
            if i < len(rwords) - 1:
                output += ' '
        return output