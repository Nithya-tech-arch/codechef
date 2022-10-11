#hola

a="Hello, World!"
print(a)


#statements

if __name__ == '__main__':
    n = int(input().strip())
    if(n%2!=0):
        print("Weird")
    else:
        if((n>=2)and(n<=5)):
            print("Not Weird")
        elif((n>=6)and(n<=20)):
            print("Weird")
        elif(n>20):
            print("Not Weird")
            
            
#Ops

if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print(a+b)
    print(a-b)
    print(a*b)

    
    
#divs

if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print(a//b)
    print(a/b)

    

#loops

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        print(i*i)
        
        
        
#funcs

def is_leap(year):
    leap = False
    if(((year%4==0) and (year%100!=0))or(year%400==0)):
        leap=True
    else:
        leap=False
    
    # Write your logic here
    
    return leap

year = int(input())
print(is_leap(year))



#Print func

if __name__ == '__main__':
    n = int(input())
    for i in range(1,n+1):
        print(i,end="")
        
        

        
