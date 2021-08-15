    lst = []
    n = int(input())

    for i in range(0, n):
        ele = input()
        lst.append(ele)

    tupl = tuple(lst)
    print(hash(tupl))