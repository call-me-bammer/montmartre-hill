def solution(k, tangerine):
    answer = 0
    
    dict_tangerine = {}
    for i in tangerine:
        if dict_tangerine.get(i):
            dict_tangerine[i] += 1
        else: dict_tangerine[i] = 1 

    a = [(dict_tangerine[i], i) for i in dict_tangerine]
    a.sort(reverse=True)

    for i in a:
        k -= i[0]
        answer += 1
        if k <= 0:
            break
            
    return answer

print(solution(6, [1, 3, 2, 5, 4, 5, 2, 3]))
