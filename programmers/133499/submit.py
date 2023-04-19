def solution(babbling):
    answer = 0

    dict_baby = ['aya', 'ye', 'woo', 'ma']
    
    for w in babbling:
        flag = 4
        a = [0] * len(w)
        for idx, c in enumerate(w):
            if a[idx] != 0:
                continue
        
            for jdx, d in enumerate(dict_baby):
                f = w[idx:idx+len(d)].find(d)
                if f != -1:
                    f = jdx
                    break
            
            if f == -1 or flag == f:
                break
            flag = f
            a[idx:idx+len(d)] = [1] * len(dict_baby[f])

        if min(a) == 0:
            continue
        
        answer += 1

    return answer

print(solution(["ayaye", "uuu", "yeye", "yemawoo", "ayaayaa"])) # 2
