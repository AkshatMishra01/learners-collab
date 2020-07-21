def factorial():
    if(x != 1):
        print(x*factorial(x-1))
        factorial()
    else:
        print("not working")
print("hello user")
x = input('enter the number')
