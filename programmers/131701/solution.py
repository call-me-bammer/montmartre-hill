def solution(elements):
    answer = 0

    n = len(elements)
    s = set()

    for i in range(1, n + 1):
        for j in range(0, n):
            if i + j > n:
                s.add(sum(elements[j:] + elements[:j+i-n]))
            else:
                s.add(sum(elements[j:j+i]))
    
    answer = len(s)    
    return answer

print(solution([7, 9, 1, 1, 4])) # 18
