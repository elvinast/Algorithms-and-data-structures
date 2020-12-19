t = int(input())
while(t > 0):
    t -= 1
    n = int(input())
    a = [int(i) for i in input().split()]
    b = []
    d = []
    for i in a:
        if i not in b:
            b.append(i)
        else: d.append(i)
    b = sorted(b)
    # print(b)
    printed = False;
    j = 0
    if (len(a) == 2 and a[0] == a[1]):
        print(-1)
        continue;
    for i in range(len(a)):
        if a[i] == b[j] and a[i] not in d:
            print(i + 1)
            printed = True
            break
        if a[i] == b[j] and a[i] in d:
            j += 1
    if printed == False: print(-1)
    # print(a)