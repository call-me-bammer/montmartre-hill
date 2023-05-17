from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = deque()
    
    s = 0
    while truck_weights:
        if bridge_length == len(bridge):
            s -= bridge[0]
            bridge.popleft()
            continue
        
        # notice. sum(bridge) runs O(n)
        if weight < s + truck_weights[0]:
            bridge.append(0)
            
        else:
            bridge.append(truck_weights[0])
            s += truck_weights[0]
            del truck_weights[0]
        answer += 1
        
    answer += bridge_length
    return answer

# 5
print(solution(1, 5, [1, 1, 1, 1]))
# 6
print(solution(2, 5, [1, 1, 1, 1]))
# 8
print(solution(2, 10, [7, 4, 5, 6]))
# 101
print(solution(100, 100, [10]))
# 110
print(solution(100, 100, [10,10,10,10,10,10,10,10,10,10]))
