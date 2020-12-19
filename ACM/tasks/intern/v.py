def kth(x,y,k): 
    mini = min(x, y) 
    cnt = 0
    for i in range(1, mini + 1): 
        if (x % i == 0 and y % i == 0): 
            print(i)
            cnt += 1
        # print(cnt)
        if (cnt == k): 
            return i 
    return -1
x = int(input())
y = int(input())
k = int(input())
print(kth(x, y, k))