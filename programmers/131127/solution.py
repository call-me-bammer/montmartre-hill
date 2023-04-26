from collections import Counter

def solution(want, number, discount):
    answer = 0

    dict_want = {i:number[idx] for idx, i in enumerate(want)}
    dict_discount = dict(Counter(discount[:10]))
    
    for idx, i in enumerate(discount):        
        flag = True
        for j in dict_want:
            if (j not in dict_discount) or (dict_want[j] != dict_discount[j]):
                flag = False
                break
        if flag:
            answer += 1
            
        dict_discount[i] -= 1
        if dict_discount[i] == 0:
            del dict_discount[i]
        
        if len(discount) > idx + 10:
            if discount[idx + 10] in dict_discount:
                dict_discount[discount[idx + 10]] += 1
            else:
                dict_discount[discount[idx + 10]] = 1
    
    return answer

want = ["banana", "apple", "rice", "pork", "pot"]
number = [3, 2, 2, 2, 1]
discount = ["chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana"]

print(solution(want, number, discount)) # 3
