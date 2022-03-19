
import numpy as np

if __name__ == '__main__':
    rows,cols = input().split()    

    array1 = []
    for i in range(int(rows)):
        array2 = input().split()
        array1.append(array2)

    Arr = np.array(array1,int)
    print (np.transpose(Arr))
    print (Arr.flatten())
