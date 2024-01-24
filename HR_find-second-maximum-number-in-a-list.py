n = int(input())
li = list(map(int, input().split()))
li = sorted(li)
max = li[n - 1]
li = li[::-1]

for i in li:
    if i < max:
        print(i)
        break
