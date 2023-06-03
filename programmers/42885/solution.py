from collections import deque

def solution(people, limit):
    answer = 0
    p = deque(sorted(people[:], reverse=True))
    
    while p:
        first = p[0]
        p.popleft()
        if p and first + p[-1] <= limit:
            p.pop()
        answer += 1    
            
    return answer

# 3
print(solution([70, 50, 80, 50], 100))
# 3
print(solution([70, 80, 50], 100))
