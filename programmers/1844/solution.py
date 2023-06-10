from collections import deque

def solution(maps):
    answer = 1
    
    h = len(maps)
    w = len(maps[0])
    
    v = [[0] * w for _ in range(h)]
    q = deque([(0, 0)])
    v[0][0] = 1
    count = len(q)
    
    direct = [(-1, 0), (0, 1), (1, 0), (0, -1)]
    
    while q:
        r = q[0]
        q.popleft()
        count -= 1
        
        if (r[0], r[1]) == (h-1, w-1):
            break
        
        for d in direct:
            y = r[0] + d[0]
            x = r[1] + d[1]
            
            if y < 0 or y >= h:
                continue
            if x < 0 or x >= w:
                continue

            if maps[y][x] == 1 and v[y][x] == 0:
                v[y][x] = 1
                q.append((y, x))
        
        if count == 0:
            count = len(q)
            answer += 1
    
    if v[h-1][w-1] == 0:
        return -1
    
    return answer

# 11
print(solution([[1,0,1,1,1],[1,0,1,0,1],[1,0,1,1,1],[1,1,1,0,1],[0,0,0,0,1]]))
# -1
print(solution([[1,0,1,1,1],[1,0,1,0,1],[1,0,1,1,1],[1,1,1,0,0],[0,0,0,0,1]]))
