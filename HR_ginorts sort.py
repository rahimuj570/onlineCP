s = input()
s = sorted(s)
odd = ""
even = ""
upper = ""
lower = ""
for i in s:
    if i.isnumeric():
        if int(i) % 2 == 0:
            even += i
        else:
            odd += i
    elif i.isupper():
        upper += i
    else:
        lower += i

print(lower + upper + odd + even)
