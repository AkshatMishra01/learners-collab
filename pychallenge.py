import os
class parrot:
    color = "green"
    color2 = "orange"
    species = 'bird'
    name = "Himant"
    def _init_(self,name,age):
        pass
red = parrot()
print("parrot is a {}".format(red.__class__.species))
print("the color of parrot is {}".format(red.__class__.color))
print("name of the parrot is: {}".format(red.__class__.name))
class rocker:
    namerock = "divyasom"
    def __init__(self,age):
        print(" The age of the  rocker is:", age)
rock = rocker(age)
print("name of the rocker is {}".format(rock.__class__.namerock))
rock.__init__(17)
