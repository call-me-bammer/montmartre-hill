def solution(progresses, speeds):
    answer = []
    days = 0
    
    while progresses != []:
        days += 1
 
        cnt = 0
        while progresses != [] and progresses[0] + speeds[0] * days >= 100:
            progresses.pop(0)
            speeds.pop(0)
            cnt += 1
            
        if cnt == 0: continue
        answer.append(cnt)
            
    return answer
  
print(solution([93, 30, 55], [1, 30, 5]))
print(solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1]))
  