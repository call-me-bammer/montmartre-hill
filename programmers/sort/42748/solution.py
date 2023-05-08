def solution(array, commands):
    answer = []
    
    for cmd in commands:
        i, j, k = cmd
        a = array[i-1:j]
        a.sort()
        answer.append(a[k-1])

    return answer

# [5, 6, 3]
print(solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]))
