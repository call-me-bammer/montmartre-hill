from collections import deque

def solution(answers):
    answer = []
    
    a = deque([1, 2, 3, 4, 5])
    b = deque([2, 1, 2, 3, 2, 4, 2, 5])
    c = deque([3, 3, 1, 1, 2, 2, 4, 4, 5, 5])
    
    result = {1: 0, 2: 0, 3: 0}
    
    for i in answers:
        if i == a[0]:
            result[1] += 1
        if i == b[0]:
            result[2] += 1
        if i == c[0]:
            result[3] += 1
            
        a.rotate(-1)
        b.rotate(-1)
        c.rotate(-1)

    for i in result:
        if result[i] == max(result.values()):
            answer.append(i)
    
    return answer

# [1]
print(solution([1,2,3,4,5]))
# [1,2,3]
print(solution([1,3,2,4,2]))
