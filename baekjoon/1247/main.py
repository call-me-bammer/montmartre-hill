for i in range(3):
  n = int(input())
  s = 0
  for j in range(n):
    s += int(input())
  if s == 0:
    print('0')
  elif s > 0:
    print('+')
  else:
    print('-')
