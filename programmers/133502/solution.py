def solution(ingredient):
    answer = 0
    stack = []
    for i in ingredient:
        stack.append(i)
        
        if i == 1 and len(stack) > 3 and stack[-4:] == [1, 2, 3, 1]:
            del stack[-4:]
            answer += 1

    return answer

print(solution([2, 1, 1, 2, 3, 1, 2, 3, 1])) # 2
print(solution([1, 3, 2, 1, 2, 1, 3, 1, 2])) # 0
