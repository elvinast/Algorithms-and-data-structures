s = input()
word = input()
for i in word:
    if i == s:
        word = word.replace(i, "")
print(word)