
"""dic={"square":"A shape", "car":"A vehicle", "mobile": "A gadget", "building":"A infrastructure"}
i=input("ENter the word to find meaning ")
print(dic[i])"""

"""
"r" - Open file for reading - defualt
"w" - Open fie for writing
"x" - Creates file if not exists, if exists operation is failed
"a" - Append / Add more content to a file 
"t" - Text mode - default
"b" - Binary mode
"r+" - Read and write 
"""

# import platform
# print("Platform is ",platform.platform())
# print(platform.version()," :Version")
# print(platform.machine()," :Machine")
# print(platform.node()," :node")
# print(platform.release()," :release")
# print(platform.architecture()," :architecture")
# print(platform.python_compiler(),":Compiler")

# print("name is",__name__)

# a=" and ",join(list)
# print(a)

"""     MAP
a= ["8","9","10"]
a=list(map(int,a))              ""map function""
square=list(map(lambda x:x*x, a))      ""map with lamba""
print(square)

def sq(a):
    return a*a
def cube(a):
    return a*a*a

func=[sq,cube]
for i in range(5):
    v=list(map(lambda x:x(i),func))
    print(v)"""

#      FILTER
# num=[1,2,3,4,5,6,7,8,9]
# def is_greater(n):
#     return n>5
# gr_than_5= list(filter(is_greater,num))
# print(gr_than_5)

"""     REDUCE
from functools import reduce
list=[1,2,3,4,5]
num= reduce(lambda x,y:x+y, list)
print(num)"""

# Args and Kwargs
# def funargs(normal, *args, **kwargs):
#     print(normal)
#     for item in args:
#         print(item)
#     print("\nNow I would Like to introduce some of our heroes")
#     for key, value in kwargs.items():
#         print(f"{key} is a {value}")
#
# har = ["Harry", "Rohan", "Skillf", "Hammad","Shivam", "The programmer"]
# normal = "I am a normal Argument and the students are:"
# kw = {"Rohan": "Monitor", "Harry": "Fitness Instructor","The Programmer": "Coordinator", "Shivam": "Cook"}
# funargs(normal, *har, **kw)


#######################################################################################################
"""
class Employee:
    no_of_leaves = 8

    def __init__(self, aname, asalary, arole):
        self.name = aname
        self.salary = asalary
        self.role = arole

    def printdetails(damn):
        return f"The Name is {damn.name}. Salary is {damn.salary} and role is {damn.role}"

harry = Employee("Harry", 255, "Instructor")
# harry= Employee()
# rohan = Employee()
# harry.name = "Harry"
# harry.salary = 455
# harry.role = "Instructor"
#
# rohan.name = "Rohan"
# rohan.salary = 4554
# rohan.role = "Student"

print(harry.name)
"""

# SPLIT FUNCTION
# string="karan,ram,om,raju,harsh"
# add=string.split(",")
# print(add)

