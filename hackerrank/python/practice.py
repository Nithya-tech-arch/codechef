#loops

if __name__ == '__main__':
    n = int(input())
    for i in range(1,n+1):
        print(i,end="")
        
        
#loops

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        print(i*i)
        
        
#leap year

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



