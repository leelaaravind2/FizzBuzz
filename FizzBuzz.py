num = int(input("Enter a number: "))+1

for i in range(0,num):
    if (i%3==0 and i%5==0):
        print("FizzBuzz")
    elif (i%3==0):
        print("Fizz   ")
    elif (i%5==0):
        print("Buzz   ")
    

