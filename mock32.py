b = []
c= []
inc  = 0
#s,r=input().split(' ')
a=list(map(int,input().split(' ')))
#for i in range(int(r)):
       #  b.append(input().split(' '))
s=a[0]
r =a[1]
b = a[s+2:]
v=a[2:len(a)-len(b)]
for j in range(0,len(b),2):
   for i in  v:
             if ((i >=b[j])  and  (i <= b[j+1])):
                  inc += 1
   c.append(inc)
   inc  = 0
   
for i in c:
    print(i)
