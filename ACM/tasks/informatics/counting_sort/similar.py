n = int(input())
a = [int(i) for i in input().split()]
k = int(input())
b = [int(i) for i in input().split()]
if set(a) == set(b):
    print("YES")
else:
    print("NO")