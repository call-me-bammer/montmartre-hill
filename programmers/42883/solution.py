def solution(number, k):
    answer = ''
    
    cnt = 0
    stack = [number[0]]
    
    i = 1
    while cnt != k:        
        if i == len(number) or stack and stack[-1] < number[i]:
            stack.pop()
            cnt += 1
            continue
        stack.append(number[i])
        i += 1
    
    stack.append(number[i:])
    answer = ''.join(stack)
    
    return answer

# '94'
print(solution("1924", 2))
# '3234'
print(solution("1231234", 3))
# '775841'
print(solution("4177252841", 4))
# '987'
print(solution("98765", 2))