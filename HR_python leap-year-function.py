def is_leapYear(year):
    f = False
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return True
    return False

year = int(input())
print(is_leapYear(year))
