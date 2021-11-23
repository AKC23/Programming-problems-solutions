import numpy as np


if __name__ == '__main__':

    size1 = tuple(map(int, input().split()))

    a = np.zeros((size1), dtype = np.int32)
    b = np.ones((size1), dtype = np.int32)
    print (a)
    print (b)

