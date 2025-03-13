m = int(input('Enter the m value (start value): '))
n = int(input('Enter the n value (end value): '))
p = int(input('Enter the p value (increment): '))

i = m
while i <= n:
    print(i, end=' ')
    i = i + p

else :
    print('Mostly you gave value to M which is bigger than N')