import numpy as np


if __name__ == '__main__':

    my_array = tuple(map(int, input().split()))

    print(np.reshape(my_array,(3,3)))

    # a = np.zeros((size1), dtype = np.int32)
    # b = np.ones((size1), dtype = np.int32)
    # print (a)
    # print (b)

