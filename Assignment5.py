class Animals:
    def __init__(self, legs=4, eyes=2):
        self.legs = legs
        self.eyes = eyes


class wild(Animals):
    def place(self):
        print("Forest")

class carnivores(wild):
    def food(self):
        print("Meat")

class herbivores(wild):
    def food(self):
        print("Plants")

class omnivores(Animals):
    def speak(self):
        print("Random")
    def place(self):
        print("Varies from animal to animal")
    def food(self):
        print("Both plants and Animals")

class domestic_animals(Animals):

    def place(self):
        print("Domesticated by Humans, so in human-habitation")

############ Wild  ###########################
        
class tiger(carnivores):
    def speak(self):
        print("Roar")
    def colour(self):
        print("Generally, orange with black stripes but can even be white")
        
class lion(carnivores):
    def speak(self):
        print("Roar")
    def colour(self):
        print("Yellow")
                            

class deer(herbivores):
    def speak(self):
        print("Random")
    def horns(self):
        print("Yes present")
    def colour(self):
        print("Brown")
        
class elephant(herbivores):
    def speak(self):
        print("Trumpet")
    def colour(self):
        print("Grey")
        

################## Domestic Animals ######################

class domestic_animals(Animals):
    
    def place(self):
        print("Areas habitated by human beings")

        
class dog(domestic_animals):
    def speak(self):
        print("bark")
    def colour(self):
        print("brown, black, white, golden, etc")
        
class cat(domestic_animals):
    def speak(self):
        print("meow")
    def colour(self):
        print("Grey,brown, black, white, etc")
        
class cow(domestic_animals):
    def speak(self):
        print("moo")
    def colour(self):
        print("white, brown")
        
class horse(domestic_animals):
    def speak(self):
        print("Neigh")
    def colour(self):
        print("black, brown, white")


A1= horse()
print("Speaks : ",end="")
A1.speak()
print("Place : ",end='')
A1.place()
print("Colour : ",end='')
A1.colour()



