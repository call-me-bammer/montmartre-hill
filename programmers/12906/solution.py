def solution(arr):
    answer = []
    for i in arr:
        if not answer:
            answer.append(i)
            continue
        if i != answer[-1]:
            answer.append(i)
    
    return answer

# [1,3,0,1]
print(solution([1,1,3,3,0,1,1]))

# [4,3]
print(solution([4,4,4,3,3]))
