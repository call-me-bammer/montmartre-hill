n, k = list(map(int, input().split()))
stuff = []
[stuff.append(list(map(int, input().split()))) for _ in range(n)]

dp = [[0] * (k + 1) for _ in range(n + 1)]
for i in range(1, n + 1):
    for j in range(k + 1):
        if j < stuff[i-1][0]:
            dp[i][j] = dp[i-1][j]
        else:
            dp[i][j] = max(dp[i-1][j], dp[i-1][j - stuff[i-1][0]] + stuff[i-1][1])
        
print(dp[n][k])
