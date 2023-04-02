def solution(k, m, score):
    answer = 0
    
    a = [0] * 10
    for i in score:
        a[i] += 1
    
    cnt = 0
    
    for i in range(k, 0, -1):
        cnt += a[i]
        if cnt >= m:
            answer += int(cnt / m) * i * m
            cnt %= m
            
    return answer
  
def main():
    k = 4
    m = 3
    scores = [4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2]
    print(solution(k, m, scores))

if __name__ == "__main__":
    main()
