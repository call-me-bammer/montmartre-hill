import math

def solution(r1, r2):
    answer = 0
    c = math.sqrt(r1 ** 2)

    for i in range(0, r2 + 1):
        b = math.floor(math.sqrt(r2 ** 2 - i ** 2))
        if i <= r1:
            a = math.ceil(math.sqrt(r1 ** 2 - i ** 2))
            answer += b - a + 1 if a != 0 else b - a
        else:
            answer += b
    
    answer *= 4
    return answer

# 20
print(solution(2, 3))
