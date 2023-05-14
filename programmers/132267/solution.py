def solution(a, b, n):
    answer = 0
    
    while n >= a:
        answer += b * (n // a)
        print(n // a)
        n += (b - a) * (n // a)

    return answer

# 19
print(solution(2, 1, 20))
# 9
print(solution(3, 1, 20))
