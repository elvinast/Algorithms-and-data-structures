n = int(input())
a = [int(i) for i in input().split()]
maxi = max(a)
# print(maxi)
for i in range(len(a)):
    if a[i] == maxi:
        a[i] = 1
    else: a[i] = 0
for i in a:
    print(i, end = ' ')