#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    char A[100];
    int l = 0,i=0;

    gets(A);

    while(A[i] != '\0')
    {
        if(A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'Y' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'|| A[i] == 'y')
        {
            A[i] = A[i+1];
        }
        else
        {
            printf(".");
            if(A[i] >= 65 && A[i]<=90)
            {
                A[i] += 32;
            }
            cout<<A[i];
        }
        i++;
    }

}
