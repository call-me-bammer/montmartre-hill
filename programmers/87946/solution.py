import itertools
import copy

def solution(k, dungeons):
    answer = 0

    global_max = 0
    permute = itertools.permutations(dungeons, len(dungeons))
    for p in permute:
        local_max = 0
        l = copy.deepcopy(k)
        for i in list(p):
            if l < i[0]:
                break
            l -= i[1]
            local_max += 1
        if global_max < local_max:
            global_max = local_max
            
    answer = global_max
    return answer

# 3
print(solution(80, [[80,20],[50,40],[30,10]]))
