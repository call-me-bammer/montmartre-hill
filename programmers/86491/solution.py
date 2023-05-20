import itertools

def solution(sizes):
    answer = 0    

    global_max = max(list(itertools.chain(*sizes)))
    l = 0
    for size in sizes:
        if l < min(size):
            l = min(size)
    
    answer = global_max * l
    return answer

# 4000
print(solution([[60, 50], [30, 70], [60, 30], [80, 40]]))
