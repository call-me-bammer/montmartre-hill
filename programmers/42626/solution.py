import heapq

def solution(scoville, K):
    answer = 0
    
    h = []
    for i in scoville:
        heapq.heappush(h, i)
        
    while len(h) > 1 and h[0] < K:
        a = h[0]
        heapq.heappop(h)
        b = h[0]
        heapq.heappop(h)
        heapq.heappush(h, a + b * 2)
        answer += 1
    
    if h[0] < K:
        return -1
    
    return answer

# 2
print(solution([1, 2, 3, 9, 10, 12], 7))
