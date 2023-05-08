# appericiate to @matpang99
def solution(citations):
    answer = 0
    
    citations.sort(reverse=True)
    h_list = map(min, enumerate(citations, start=1))
    answer = max(h_list)
    
    return answer

# 3
print(solution([3, 0, 6, 4, 5]))
