from collections import deque

def solution(s):
    answer = 0

    a = deque(s)
    for i in range(len(s)):
        a.rotate(-1)
        b = []
        for j in a:
            if b and ((b[-1] == '(' and j == ')') or (b[-1] == '{' and j == '}') or (b[-1] == '[' and j == ']')):
                b.pop()
            else:
                b.append(j)
        if not b:
            answer += 1

    return answer

print(solution("[](){}"))
