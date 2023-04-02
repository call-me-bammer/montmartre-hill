import heapq

def solution(k, score):
  answer = []
  pq = []
  
  for i in range(len(score)):
    if i < k:
      heapq.heappush(pq, score[i])
      answer.append(pq[0])
      continue
    
    if pq[0] < score[i]:
      heapq.heappop(pq)
      heapq.heappush(pq, score[i])
    
    answer.append(min(pq))
  
  return answer

def main():
  score = [10, 100, 20, 150, 1, 100, 200]
  print(solution(3, score))

if __name__ == "__main__":
  main()
