#calculating greatest common divisor

num1=int(input('Enter the first number: '))
num2=int(input('Enter the second number: '))
counter=0

while num1!=num2:
    counter+=1
    if num1>num2:
        num1=num1-num2 
    else:
        num2=num2-num1

print("The greatest common divisor is: " + num1 )
