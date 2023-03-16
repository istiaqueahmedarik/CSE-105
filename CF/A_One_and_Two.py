t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    p = 1
    for k in a:
        p *= k
    ans = 1
    present = a[0]
    flag = 1
    while(ans<n):
        if(present==p//present and p%present==0):
            flag = 0;
            print(ans)
            break
        present*=a[ans]
        ans+=1
    if(flag):
        print(-1)
