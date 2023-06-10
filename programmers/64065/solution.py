from functools import cmp_to_key

def cmp(a, b):
    if a[1] > b[1]:
        return -1
    return 0

def solution(s):
    answer = []
    
    split = s[1:-1].split('},{')
    split[0] = split[0].strip('{}')
    split[-1] = split[-1].strip('{}')
    
    c = [[i, 0] for i in range(100001)]
    
    for t in split:
        a = t.split(',')
        for b in a:
            c[int(b)][1] += 1
    
    c.sort(key=cmp_to_key(cmp))
    
    for i in range(len(split)):
        answer.append(c[i][0])
    
    return answer

# [2, 1, 3, 4]
print(solution("{{2},{2,1},{2,1,3},{2,1,3,4}}"))
# [8]
print(solution("{{8}}"))
