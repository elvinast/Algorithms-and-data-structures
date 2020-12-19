#########
def naive_fib(n): #O(2^n)
    if n == 1 or n == 2:
        return 1
    return naive_fib(n - 1) + naive_fib(n - 2)

######## O(n)

def fib2(n, memo):
    if memo[n] is not None:
        return memo[n]
    if n == 1 or n == 2:
        return 1
    else:
        result = fib2(n - 1, memo) + fib2(n - 2, memo)
    memo[n] = result
    return result
    
def fib_memo(n):
    memo = [None] * (n + 1)
    return fib2(n, memo)

############ O(n)

def fib_bottom_up(n):
    if n == 1 or n == 2:
        return 1
    bottom_up = [None] * (n + 1)
    bottom_up[1] = 1
    bottom_up[2] = 1
    for i in range(3, n + 1):
        bottom_up[i] = bottom_up[i - 1] + bottom_up[i - 2]
    return bottom_up[n]

##############

print(naive_fib(20)) 

print(fib_memo(100))

#print(fib_memo(1000)) returns recursion error

print(fib_bottom_up(1000))