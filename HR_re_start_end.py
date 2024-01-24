import re

s = input()
s2 = input()

pattern = re.compile(s2)
m = pattern.search(s)
if not m:
    print("(-1, -1)")
while m:
    print("({}, {})".format(m.start(), m.end() - 1))
    m = pattern.search(s, m.start() + 1)
