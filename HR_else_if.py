x = int(input())
if x % 2 != 0: print("Weird")
else:
    if x in range(2,6) or x>20 : print("Not Weird")
    else: print("Weird")
