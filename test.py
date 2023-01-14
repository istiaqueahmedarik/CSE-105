n = int(input())
f = list(map(int, input().split()))
gifts = [-1] * n
for i in range(n):
    if f[i] != 0:
        gifts[f[i]-1] = i
not_gifted = []
for i in range(n):
    if gifts[i] == -1:
        not_gifted.append(i+1)
for i in range(n):
    if f[i] == 0:
        f[i] = not_gifted.pop(0)
print(*f)
