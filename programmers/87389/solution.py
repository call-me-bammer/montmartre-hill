def solution(n):
    answer = 0
    
    for i in range(1, n):
        if n % i == 1:
            answer = i
            break
    
    return answer

# 3
print(solution(10))
# 11
print(solution(12))
