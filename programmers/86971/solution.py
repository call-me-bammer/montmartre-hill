import copy

def dfs(visit, adj):
    stack = [1]
    while stack:
        r = stack[-1]
        stack.pop()
        
        for i in adj[r]:
            if visit[i] == 0:
                stack.append(i)
                visit[i] = 1
    
    return visit.count(1)

def solution(n, wires):
    answer = n
    
    for i in range(len(wires)):
        copied_wires = copy.deepcopy(wires)
        del copied_wires[i]
        
        visit = [0] * (n + 1)
        adj = [[] for _ in range(n + 1)]
        for i in copied_wires:
            adj[i[0]].append(i[1])
            adj[i[1]].append(i[0])
        
        visit[1] = 1
        result = dfs(visit, adj)
        abs_ = abs(result - (n - result))
        
        if answer > abs_:
            answer = abs_
    
    return answer

# 3
print(solution(9, [[1,3],[2,3],[3,4],[4,5],[4,6],[4,7],[7,8],[7,9]]))
# 0
print(solution(4, [[1,2],[2,3],[3,4]]))
# 1
print(solution(7, [[1,2],[2,7],[3,7],[3,4],[4,5],[6,7]]))

