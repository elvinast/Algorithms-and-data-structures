def count(n, b, a):
    cnt = [0] * n
    for i in b:
        cnt[i - 1] += 1
    for i in range(n):
        if a[i] < cnt[i]:
            print('yes')
        else:
            print('no')
 
 
n = int(input())
a = [int(i) for i in input().split()]
k = int(input())
b = [int(i) for i in input().split()]
 
count(n, b, a)