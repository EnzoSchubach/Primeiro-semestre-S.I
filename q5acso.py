print("Insert the price of the the fuel")
price = float(input())
print ("How much do you wish to pay")
payment = float(input())
payment /= price
print (f"You'll be able to fill up to {payment: .2f} liters of your tank")