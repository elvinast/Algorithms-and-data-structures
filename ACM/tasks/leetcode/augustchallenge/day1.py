s = str(input())
l = s.lower()
sm = s.upper()
cnt = 0
if s == l or s == sm:
    print('yes')
if s[0] == sm[0]:
    for i in range(len(s)):
        if s[i] == l[i]:
            cnt += 1
    if cnt == len(s) - 1:
        print('yes')
        exit()
    else: print('no')

else:
    print('no')