number = int(input('Insert a number: '))
centena = int(number/100)
centena *= 100
dezena = int((number - centena)/10)
dezena *= 10
number = number - (dezena + centena)
print (f"CENTENA = {centena}\nDEZENA = {dezena}\nUNIDADE = {number}")