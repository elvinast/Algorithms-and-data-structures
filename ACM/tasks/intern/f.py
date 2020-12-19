import math
def isPowerof2(x):
    return math.log2(x).is_integer()
a = [int(i) for i in input().split()]
a = set(a)
for i in sorted(a):
    if isPowerof2(i) == False:
        print(i, end = ' ')
