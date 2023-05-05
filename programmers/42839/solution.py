import itertools

def solution(numbers):
    answer = 0

    set_permute = set()
    set_prime = set()

    for i in range(1, len(numbers) + 1):
        permute = itertools.permutations(numbers, i)
        for p in permute:
            a = int(''.join(list(p)))
            set_permute.add(a)
    
    m = max(set_permute)
    a = [0] * (m + 1)
    a[0] = 1
    a[1] = 1
    for i in range(2, len(a)):
        if a[i] == 0:
            for j in range(i + i, len(a), i):
                a[j] = 1

    for n in set_permute:
        if a[n] == 0:
            answer += 1
    
    return answer

# 3
print(solution("17"))
# 2
print(solution("011"))
