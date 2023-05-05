def solution(n):
    answer = []

    a = [[0]]
    for i in range(1, n + 1):
        a.append([0] * i)

    flag_left = True
    flag_row = False
    flag_right = False

    r = 1
    p = 0
    t = 0
    q = n - 2
    s = 0
    f = 0
    
    for i in range(1, int((n * (n + 1) / 2) + 1)):
        if flag_left:
            a[r][p] = i
            r += 1
            if r == n + 1 - s:
                flag_left = False
                flag_row = True
                r -= 1
                t = p + 1
                s += 1
        elif flag_row:
            a[r][t] = i
            t += 1
            if a[r][-1-f] != 0:
                flag_row = False
                flag_right = True
                r -= 1
                f += 1
                q = t - 2
        elif flag_right:
            a[r][q] = i
            if a[r][q-1] != 0:
                r += 1
                p += 1
                flag_right = False
                flag_left = True
                continue
            r -= 1
            q -= 1
        
    for i in range(1, n + 1):
        for j in a[i]:
            answer.append(j)

    return answer

print(solution(4))
print(solution(5))
print(solution(6))
print(solution(7))
