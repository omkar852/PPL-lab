import turtle

s = turtle.getscreen()
t = turtle.Turtle()


class shape:
    def __init__(self, sides = 0, length = 0) :
        self.sides = sides
        self.length = length



        
class square(shape):
    def show(self):
        for i in range(4):
            t.fd(self.length)
            t.rt(90)    

class pentagon(shape):
    def show(self):
        for i in range(5):
           t.forward(self.length) 
           t.right(72) 

class hexagon(shape):
    def show(self):
        for i in range(6):
           t.forward(self.length) 
           t.right(60)

class octagon(shape):
    def show(self):
        for i in range(8):
           t.forward(self.length) 
           t.right(45)

class triangle(shape):
    def show(self):
        for i in range(3):
            t.fd(self.length)
            t.rt(120)
        


shape = octagon(8, 100)
print("The length of a side of shape is ",shape.length)
print("The number of a sides of shape is ",shape.sides)

shape.show()







