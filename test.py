MOD = int(1e9) + 7

def beauty(n):
    dp = [0] * (n+1)
    dp[0] = 1
    dp[1] = 0
    for i in range(2, n+1):
        dp[i] = dp[i-1] * (i-1) % MOD
    
    ans = 0
    for i in range(n):
        ans += (i * (i+1) // 2) * dp[n-i-1]
        ans %= MOD
    return ans

t = int(input())
for c in range(t):
    n = int(input())
    print(beauty(n))
