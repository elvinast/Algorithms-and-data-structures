def is_Power_of_three(n):
    while (n % 3 == 0):
         n /= 3;         
    return n == 1;
a, b = [int(i) for i in input().split()]
for i in range(b, a, -1):
    # print(i)
    if is_Power_of_three(i) and i <= 9999 and i >= 1000:
        print(i, end = ' ')