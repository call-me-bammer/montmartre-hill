n, k = list(map(int, input().split()))
stuff = []
[stuff.append(list(map(int, input().split()))) for _ in range(n)]

dp = [0] * (k + 1)
for i in range(n):
    for j in range(k, -1, -1):
        if j >= stuff[i][0]:
            dp[j] = max(dp[j], dp[j - stuff[i][0]] + stuff[i][1])
        
print(dp[k])
