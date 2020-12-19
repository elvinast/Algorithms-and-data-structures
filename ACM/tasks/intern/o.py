def check(s):
    ws = s.lower().split() #wordss
    ws.sort()
    ws = [x for x in ws if (x != '#' and x != '###')]
    tmp = ""
    maxi = 0
    cnt = 1
    max_word = ""
    for i in range(len(ws)):
        if tmp == ws[i]:
            cnt += 1
        else:
            tmp = ws[i]
            cnt = 1
        if cnt > maxi:
            maxi = cnt
            max_word = tmp
    return max_word.upper()


s = input()
print(check(s))