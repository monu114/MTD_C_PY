my_name = input("Enter the substring: ")

print(my_name)
print(my_name.upper())

try:
    print(my_name.index('tt'))
    print('Next statement')
except ValueError:
    print(f"The sub-string 'tt' not found in {my_name}")
    print(my_name.capitalize())
    print(my_name.find('tt'))
except:
    print("Maybe you have not entered the right value.")
