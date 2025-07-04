month = int(input('Insert the month: '))
day = int(input('Insert the day: '))
time_passed:int = day + (month * 30)
print(f"As of {month}/{day}, {time_passed} days have passed")
