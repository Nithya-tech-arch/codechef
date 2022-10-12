#List comprehension

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    listC=[[i, j, k] for i in range (0,x+1) for j in range(0,y+1) for k in range(0, z+1) if (i+j+k) !=n]
    print(listC)
    
    
#Lists

if __name__ == '__main__':
    N = int(input())
    
    list1=[]
    for i in range(N):
        code = list(input().split())
        
        #code[0]=insert
        #code[1]=position
        #code[2]=number to insert
        
        if (code[0]=='insert'):
            list1.insert(int(code[1]),int(code[2]))
        elif(code[0]=='print'):
            print(list1)
        elif(code[0]=='remove'):
            list1.remove(int(code[1]))
        elif(code[0]=='append'):
            list1.append(int(code[1]))
        elif(code[0]=='sort'):
            list1.sort()
        elif(code[0]=='pop'):
            list1.pop()
        elif(code[0]=='reverse'):
            list1.reverse()
    

#Tuples

if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    tups1=tuple(integer_list)
    print(hash(tups1))
    
    

#Percent finder

if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    tups1=tuple(integer_list)
    print(hash(tups1))
    
    
    
#Runner-yps

from array import *
if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    set_list=set(arr)
    set_list.remove(max(set_list))
    print(max(set_list))
