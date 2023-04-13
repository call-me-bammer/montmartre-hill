def solution(order):
    answer = 0

    stack = []
    
    now = 1
    for i in order:
        if now < i:
            for j in range(now, i + 1):
                stack.append(now)
                now += 1
        
        if stack and stack[-1] == i:
            stack.pop()
            answer += 1
        elif now == i:
            now += 1
            answer += 1
        else:
            break
        
    return answer

print(solution([4, 3, 1, 2, 5]))
print(solution([4, 3, 5, 1, 2]))
print(solution([5, 4, 3, 2, 1]))
