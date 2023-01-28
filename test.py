def max_gcd(n, a):
    prefix_sum = [0]*(n+1)
    for i in range(1,n+1):
        prefix_sum[i] = prefix_sum[i-1] + a[i-1]
    dp = [[0]*(n+1) for _ in range(n+1)]
    for i in range(1,n+1):
        dp[i][1] = prefix_sum[i]
    for i in range(1,n+1):
        for j in range(2,i+1):
            a = dp[i-1][j-1]
            b = prefix_sum[i]-prefix_sum[i-j]
            while b:
                a, b = b, a % b
            dp[i][j] = a
    return max(dp[n])

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(max_gcd(n, a))
