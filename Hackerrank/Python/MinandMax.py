import numpy as np

if __name__ == '__main__':
    rows,cols = input().split()    

    array1 = []
    list = []
    for i in range(int(rows)):
        array2 = input().split()
        array1.append(array2)

    Arr = np.array(array1,int)

    list = np.min(Arr,axis=1)

print(max(list))