def solution(k, ranges):
    answer = []
    partial_sum = [0, k]
    while k != 1:
        if k % 2 == 0:
            k /= 2
        else:
            k *= 3
            k += 1
        partial_sum.append(k)

    for i in range(1, len(partial_sum) - 1):
        s = max(partial_sum[i], partial_sum[i+1]) - abs(partial_sum[i] - partial_sum[i+1]) / 2
        if i == 1:
            partial_sum[1] = s
        else:
            partial_sum[i] = s + partial_sum[i-1]
    partial_sum.pop()

    for i in ranges:
        if i[0] - i[1] > len(partial_sum) - 1:
            answer.append(-1)
            continue
        answer.append(partial_sum[len(partial_sum) - 1 + i[1]] - partial_sum[i[0]])

    return answer

"""
import copy

a = []

for i in range(2, 10001):
    k = copy.deepcopy(i)

    cnt = 0

    while k != 1:
        if k % 2 == 0:
            k /= 2
        else:
            k *= 3
            k += 1
        cnt += 1
    
    a.append(cnt)

print(max(a))
"""

print(solution(5, [[0,0],[0,-1],[2,-3],[3,-3]]))
