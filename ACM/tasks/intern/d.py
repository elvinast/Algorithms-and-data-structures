def isPalin(s):
    return s == s[::-1]
a = [(i) for i in input().split()]
b = set(a)
c = []
for i in b:
    if not isPalin(i):
        c.append(i)
for i in sorted(c):
    print(i)