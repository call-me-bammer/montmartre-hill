def solution(topping):
    answer = 0
    
    dict_b = {}
    for i in topping:
        if i in dict_b:
            dict_b[i] += 1
        else:
            dict_b[i] = 1
    
    a = 0
    b = len(dict_b)
    
    dict_a = {}
    
    for i in topping:
        dict_b[i] -= 1
        if dict_b[i] == 0:
            b -= 1
        
        if i in dict_a:
            dict_a[i] += 1
        else:
            dict_a[i] = 1
            a += 1
        
        if a == b:
            answer += 1
    
    return answer

print(solution([1, 2, 1, 3, 1, 4, 1, 2]))
print(solution([1, 2, 3, 1, 4]))
