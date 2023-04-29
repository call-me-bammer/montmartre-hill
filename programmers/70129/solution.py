def solution(s):
    answer = [0, 0]

    while s != '1':
        zeros = 0
        for i in s:
            if i == '0':
                zeros += 1
        answer[1] += zeros
        
        l = len(s) - zeros
        a = []
        while l != 0:
            a.append(str(l % 2))
            l = int(l / 2)
            
        s = ''.join(a[::-1])
        answer[0] += 1

    return answer

print(solution("110010101001")) # [3, 8]
