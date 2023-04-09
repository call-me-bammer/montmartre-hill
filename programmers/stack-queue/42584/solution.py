def solution(prices):
    answer = [0] * len(prices)    
    stack = []
    
    for idx, i in enumerate(prices):
        if stack == []:
            stack.append((i, idx))
            continue
        
        while len(stack) != 0 and stack[-1][0] > i:
            answer[stack[-1][1]] = idx - stack[-1][1]
            stack.pop(-1)
    
        stack.append((i, idx))
    
    i = 0
    idx = len(prices) - 1
    while len(stack) != 0:
        answer[stack[-1][1]] = idx - stack[-1][1]
        stack.pop(-1)
    
    return answer

print(solution([1, 2, 3, 2, 3]))
