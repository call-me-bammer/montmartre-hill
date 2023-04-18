def solution(cards):
    answer = 0
    
    a = [0] * len(cards)
    b = []
    
    for idx, i in enumerate(cards):
        if a[idx] != 0:
            continue
        
        a[idx] = 1
        cnt = 1
        j = i - 1
        while a[j] == 0:
            a[j] = 1
            j = cards[j] - 1
            cnt += 1
            
        b.append(cnt)    
  
    if b[0] == len(cards):
        return 0
    
    b.sort(reverse=True)
    answer = b[0] * b[1]
         
    return answer

print(solution([8,6,3,7,2,5,1,4])) # 12
