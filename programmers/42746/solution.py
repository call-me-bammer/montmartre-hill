from functools import cmp_to_key

def cmp(a, b):
    if a == b:
        return 0
    
    if a[0] < b[0]:
        return 1
    elif a[0] > b[0]:
        return -1
    
    x = (a * 4)[:4]
    y = (b * 4)[:4]
    
    if x < y:
        return 1
    return -1
    
def solution(numbers):
    answer = ''
    
    numbers = list(map(str, numbers))
    numbers = sorted(numbers, key=cmp_to_key(cmp))
    
    answer = ''.join(numbers)
    if int(answer) == 0:
        return '0'
    return answer

# '0'
print(solution([0, 0, 0]))
# '6210'
print(solution([6, 10, 2]))
# '9534330'
print(solution([3, 30, 34, 5, 9]))
