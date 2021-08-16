""" 
Problem's name: Set .intersection() Operation
Problem's link: https://www.hackerrank.com/challenges/py-set-intersection-operation/problem
Date: 16/08/21
 """

if __name__ == "__main__":

    n = int(input())
    integer_list = map(int, input().split())
    s1 = set(integer_list)

    n = int(input())
    integer_list = map(int, input().split())
    s2 = set(integer_list)
    
    print(len(s2.intersection(s1)))
