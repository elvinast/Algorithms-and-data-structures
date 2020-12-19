a = [int(i) for i in input().split()]
def insertion_sort(a):
    for i in range(1, len(a)):
        value = a[i]
        j = i - 1
        while j >= 0 and value < a[j]:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = value
insertion_sort(a)
print(a)
