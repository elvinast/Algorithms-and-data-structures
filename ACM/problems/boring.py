t = int(input())
cases = 0
while t != 0:
    l, r = map(int, input().split())
    # r = int(input())
    cnt = 0
    for i in range(l, r + 1):
        a = [int(d) for d in str(i)]
        odd_count = len(list(filter(lambda x: (x % 2 != 0), a))) 
        even_count = len(list(filter(lambda x: (x % 2 == 0), a))) 
        if (len(a) % 2 == 0):
            if (odd_count == even_count):
                cnt += 1
        else:
            if (odd_count - 1 == even_count):
                cnt += 1
    cases += 1
    print("Case #" + str(cases) + ": " + str(cnt))
    t -= 1;