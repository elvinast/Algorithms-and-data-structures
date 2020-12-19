a = [int(i) for i in input().split()]
item = int(input())
low = 0
high = len(a) - 1
while low <= high:
    mid = (low+high)//2
    if a[mid] == item:
        print(mid)
    if a[mid] > item:
        low = mid + 1
    else:
        high = mid - 1