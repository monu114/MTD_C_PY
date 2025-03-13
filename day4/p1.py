# accept a number and find its square and square roots
import math

print("Enter the number to find its square and square roots ")
input_number = int(input())

root_number = math.sqrt(input_number)
square_number = input_number ** 2  

print('Square of', input_number, 'is', square_number)
print('Square Root of', input_number, 'is', root_number)
