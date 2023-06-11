def solution(s):
    l = list(map(int, s.split()))
    return ' '.join([str(min(l)), str(max(l))])

print(solution("1 2 3 4"))
