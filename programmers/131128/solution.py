def solution(X, Y):
    answer = ''

    # 0 to 9
    x = [0] * 10
    y = [0] * 10
    
    for i in X: x[ord(i) - ord('0')] += 1
    for i in Y: y[ord(i) - ord('0')] += 1

    z = []

    for i in range(10):
        m = min(x[i], y[i])
        if m != 0:
            for j in range(m):
                z.append(i)
        
    z.sort(reverse=True)
    z = [str(i) for i in z]
    
    if z == []:
        return '-1'
    elif z[0] == '0':
        return '0'
    
    answer = ''.join(z)
    return answer

print(solution('100', '2345')) # '-1'
print(solution("5525", "1255")) # '552'

print(solution('100', '203045')) # 0
print(solution('100', '123450')) # 10
