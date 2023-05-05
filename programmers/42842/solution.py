def solution(brown, yellow):
    answer = []
    
    i = 3
    while True:
        j = (brown + yellow) % i
        if j != 0:
            i += 1
            continue
        
        j = int((brown + yellow) / i)
        if (i - 2) * (j - 2) == yellow:
            break
        
        i += 1

    answer = [int((brown + yellow) / i), i]
    return answer

# [4, 3]
print(solution(10, 2))
# [3, 3]
print(solution(8, 1))
# [8, 6]
print(solution(24, 24))
