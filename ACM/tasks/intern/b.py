s = input()
a = [i for i in input().split()]
a = set(a)
for i in range(0, len(a) - 2):
    a[i] = sorted(a[i])
    a[i + 1] = sorted(a[i + 1])
    if (a[i] == a[i + 1]): a.remove(a[i])
# b = set(a)
print(a)