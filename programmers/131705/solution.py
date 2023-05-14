def solution(number):
    answer = 0
    
    for i in range(0, len(number) - 2):
        for j in range(i + 1, len(number) - 1):
            for z in range(j + 1, len(number)):
                if number[i] + number[j] + number[z] == 0:
                    answer += 1
    
    return answer

# 2
print(solution([-2, 3, 0, 2, -5]))
