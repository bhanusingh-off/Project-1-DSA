"""
#CONSTANT TIME COMPLEXITY
n = 10
m = 5

# O(1)
for i in range(4):
    for j in range(3):
        print(n,m,i,j,end=" ")
    
 

#QUADRATIC TIME COMPLEXITY
 
for i in range(n): # O(n^2)
    for j in range(n):
        print(i,end=" ")

for i in range(n): # O(n)
    print(i,end=" ") 

# O(n^2 + n)       
 

#LOGARITHMIC TIME COMPLEXITY
# o(log2n)
n = 100
i = 1

while i<=n:
  print(i,end=" ")
  i*=2

# o(log3n)
n = 100
i = 1

while i<=n:
  print(i,end=" ")
  i*=3


i = 100 
while i>0:
    print(i,end=" ")
    i//=3
    """