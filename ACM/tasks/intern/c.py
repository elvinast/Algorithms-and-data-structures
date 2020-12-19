a = [int(i) for i in input().split()]
cnt = 0
for i in range(len(a)): 
    if a[i] != 0: 
        a[cnt] = a[i] 
        cnt += 1
while cnt < len(a): 
    a[cnt] = 0
    cnt += 1
for i in a:
    print(i, end = ' ')