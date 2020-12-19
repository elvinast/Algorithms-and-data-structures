def freq(s): 
    s = s.split()          
    s1 = [] 
    for i in s:              
        if i not in s1: 
            s1.append(i)  
    s1 = sorted(s1)
    for i in range(0, len(s1)): 
        print(s1[i], s.count(s1[i]))

s = input()
freq(s) 