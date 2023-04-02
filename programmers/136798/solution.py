def solution(number, limit, power):
  answer = 0
  n_of_divisor = [1] * (number + 1)

  for i in range(2, number + 1):
    n_of_divisor[i] += 1
    for j in range(i + i, number + 1, i):
      n_of_divisor[j] += 1
  
  for i in range(1, number + 1):
    if n_of_divisor[i] > limit:
      answer += power
    else:
      answer += n_of_divisor[i]

  return answer
