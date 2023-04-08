def solution(priorities, location):
    answer = 0
    
    while True:
        front = priorities[0]
        priorities.pop(0)
        location -= 1
        
        # print
        if len(priorities) == 0 or front >= max(priorities):
            answer += 1
            if location == -1:
                break
            
        else:
            priorities.append(front)
            
        if location == -1:
            location = len(priorities) - 1
        
    return answer

def main():
    priorities = [1, 1, 9, 1, 1, 1]
    location = 0
    
    print(solution(priorities, location))
    
if __name__ == "__main__":
    main()
