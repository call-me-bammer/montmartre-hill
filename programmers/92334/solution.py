def solution(id_list, report, k):
    answer = []
    id_dict = {i: idx for idx, i in enumerate(id_list)}
    report_list = [[0] * len(id_list) for i in range(len(id_list))]
    
    for r in report:
        s = r.split()
        if report_list[id_dict[s[0]]][id_dict[s[1]]] == 0:
            report_list[id_dict[s[0]]][id_dict[s[1]]] = 1
    
    s = [sum(l) for l in zip(*report_list)]
    abuser = [idx for idx, i in enumerate(s) if i >= k]
    
    for i in report_list:
        z = 0
        for j in abuser:
            if i[j] != 0:
                z += 1
        answer.append(z)

    return answer

# [2,1,1,0]
print(solution(["muzi", "frodo", "apeach", "neo"], ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"], 2))
# [0,0]
print(solution(["con", "ryan"], ["ryan con", "ryan con", "ryan con", "ryan con"], 3))
