# try, except and finally
def divide(x, y):  
    try:  
       
        result = x // y  
    except ZeroDivisionError:  
        print("Divsion by zero not allowed ")  
    else: 
        print("Final answer :", result)  
    finally:   
        # this block is always executed    
        print('Done....\n')    
  
divide(3, 2)  
divide(3, 0)

#Handling multiple errors in an except block
try:
    variable = 10
    print(variable + "hello")
    print(variable / 2)
except ZeroDivisionError:
    print("Divided by zero")
except (ValueError, TypeError):     
    print("Error occurred")

    
#Using assert to raise error  
try:
    num = int(input("Enter a number: "))
    assert num % 2 == 0
except:
    print("Not an even number!")
else:
    reciprocal = 1/num
    print(reciprocal)


# raising exceptions
try:    
    age = int(input("Enter the age:"))    
    if(age<18):    
        raise ValueError   
    else:    
        print("the age is valid")    
except ValueError:    
    print("The age is not valid")    

