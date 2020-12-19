a = [int(i) for i in input().split()]
def bubble_sort(a):
    last_item = len(a) - 1
    for j in range(last_item):
        for i in range(last_item):
            if a[i] > a[i + 1]:
                a[i], a[i + 1] = a[i + 1], a[i]
    return a
print(bubble_sort(a))