#LIST TYPES

list1 = [100, "hello", 12.21, "abhinav", True]
print(list1)
print(len(list1))
print(type(list1))

print(list1[4])

list1.append(0)
print(list1)

list2 = [1,2,3]
list1.extend(list2)
print(list1)

list1.insert(2, "world")
print(list1)

list1.remove(2) # value remove
list1.pop(1) # index remove
list1.pop()

print(list1)

list1 = [4,34,54,32,3423]
print(min(list1))
print(max(list1))

list1 = [3,4,2,4,5,1,2,3,4,4,5,4,3,2]
print(list1.count(3))
print(list1.count(4))
list1.sort()
print(list1)
list1. reverse()

list1 = [100, "hello", 12.21, "abhinav", True, "hii"]
print(list1. index("hello"))
print (list1. index (True))

if "hii" in list1:
   print(list1. index ("hii"))
else:
   print("not present")

list1 = [1,2,3]
list2 = list1 # deep copy
list1[0] = 100
list2[1] = 100
print(list1)
print(list2)

list1 = [1,2,3]
list2 = list1.copy() # shallow copy
list1[0] = 100
list2[1] = 100
print(list1)
print(list2)

print (list (range (1,10)))
print (list (range (5,9)))
print(list(range (15,9)))
print(list(range(1,10,3)))
# 1,4,7
print(list(range(10,5,-2)))

list1 = [4,2,4,5,7,2,1,8]
print(list1 [2:6])
print (list1[:6])
print(list1[6:])
print (list1 [7:1:-2])

