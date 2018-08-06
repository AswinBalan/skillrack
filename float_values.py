import re  # importing built-in module re (regular expression)
str = input()  # getting the string as input

a = re.findall(r"\d+\.\d+",str)  # this function will find all the float numbers present in the string
  #'r'  = stands for raw string
  #\d   = denotes digit
  #+    = denotes one or more times
  #\.   = '.' in the number(for float)
  #\d + = followed by one or more digits
for i in a:
    print(i)    # print all float values present in the list a
