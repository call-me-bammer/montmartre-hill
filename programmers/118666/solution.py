def solution(survey, choices):
    answer = ''
    
    criteria = {"RT": 0, "CF": 1, "JM": 2, "AN": 3}
    result = [[0, 0], [0, 0], [0, 0], [0, 0]]
    
    for idx, s in enumerate(survey):
        a = 4 - choices[idx]
        
        if s not in criteria:
            s = s[::-1]
            a = -a
            
        if a > 0:
            result[criteria[s]][0] += a
        else:
            result[criteria[s]][1] -= a
    
    for idx, c in enumerate(criteria):
        if result[idx][0] >= result[idx][1]:
            answer += c[0]
        else:
            answer += c[1]
    
    return answer

# TCMA
print(solution(["AN", "CF", "MJ", "RT", "NA"], [5, 3, 2, 7, 5]))
# RCJA
print(solution(["TR", "RT", "TR"], [7, 1, 3]))
