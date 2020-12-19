def count(s):
    n = len(s)
    ls = [0] * 26
    s = sorted(s)
    for i in range(0, n):
        ls[ord(s[i]) - ord('a')] += 1
    cnt = 0
    for i in range(0, n):
        if (ls[ord(s[i])- ord('a')] != 0) :
            cnt += 1
    s1 = set(s)
    print(len(s1))
    for i in range(0, n):
        if (ls[ord(s[i])- ord('a')] != 0) :
            print (s[i], ls[ord(s[i]) - ord('a')])
            ls[ord(s[i]) - ord('a')] = 0

s = input()
count(s);