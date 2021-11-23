import numpy as np


if __name__ == '__main__':
    
    size = tuple(map(int, input().split()))
    
    array1 = []
    array2 = []

    a,b,c = size

    inp1 = a * c
    inp2 = b * c
    
    inp1 = int(inp1/2)
    inp2 = int(inp2/2)
    
    # print(inp1)
    # print(inp2)
    
    for i in range(0, inp1): 
        ele = tuple(map(int, input().split()))
        array1.append(ele) 

    for i in range(0, inp2): 
        ele = tuple(map(int, input().split()))
        array2.append(ele)

    print(np.concatenate((array1,array2), axis = 0))  
    
