from collections import deque

def solution(numbers, target):
    answer = 0
    
    max_depth = len(numbers)
    
    q = deque([numbers[0], -numbers[0]])
    size = len(q)
    phase = 1
    
    while phase != max_depth:
        r = q[0]
        q.popleft()
        size -= 1
        
        q.append(r + numbers[phase])
        q.append(r - numbers[phase])
        
        if size == 0:
            size = len(q)
            phase += 1
    
    answer = q.count(target)
    return answer

# 5
print(solution([1, 1, 1, 1, 1], 3))
# 2
print(solution([4, 1, 2, 1], 2))
