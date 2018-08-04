b =0
a = list()
n = input() # getting input number as string
for i in range(0,len(n),2):
    a.append(n[i:i+2]) #splitting and storing of successive numbers in a list a
    
for i in range(0,len(a),2):
    try:
        v = int(a[i+1])   #check if list index out of range
    except:
        v = 1             #if it exception occurs assign v  = 1
    b = (int(a[i])* v) + b   #finding of sum of product of successive numbers in a
    
print(b)  #output the product of sum
