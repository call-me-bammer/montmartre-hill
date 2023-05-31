def solution(n, lost, reserve):
    answer = n - len(lost)

    for i in reserve[:]:
        if i in lost:
            answer += 1
            reserve.remove(i)
            lost.remove(i)
            
    reserve.sort()
    
    for i in reserve[:]:
        if i > 1 and (i - 1) in lost:
            answer += 1
            lost.remove(i - 1)
        
        elif i < n and (i + 1) in lost:
            answer += 1
            lost.remove(i + 1)
    
    return answer

# 4
print(solution(5, [2, 4], [2]))
# 5
print(solution(5, [2, 4], [1, 3, 5]))
# 4
print(solution(5, [2, 4], [3]))
# 2
print(solution(3, [3], [1]))
