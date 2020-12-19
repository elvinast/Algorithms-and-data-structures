def isPrime(x):
    if x < 2:
        return False
    elif x == 2:
        return True  
    for n in range(2, x):
        if x % n ==0:
            return False
    return True

a = [int(i) for i in input().split()]
b = []
a = sorted(a)
for i in a:
    if not isPrime(i) and i not in b:
        b.append(i)
        a.remove(i)
c = []
for i in a:
    if not isPrime(i) and (i in b and i in a):
        c.append(i)
c = set(c)
for i in c:
    print(i, end = ' ')
