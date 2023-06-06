from functools import cmp_to_key

def cmp(a, b):
    if a[2] > b[2]:
        return 1
    return -1

def solution(n, costs):
    answer = 0

    p = [i for i in range(n)]
    costs.sort(key=cmp_to_key(cmp))

    for c in costs:
        if p[c[0]] == p[c[1]]:
            continue
        
        tmp = p[c[1]]
        for i in range(n):
            if p[i] == tmp:
                p[i] = p[c[0]]
                
        answer += c[2]

    return answer

# 4
print(solution(4, [[0,1,1],[0,2,2],[1,2,5],[1,3,1],[2,3,8]]))
