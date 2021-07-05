/**
https://www.hackerrank.com/challenges/30-data-types/problem
Lesson Learnt : cin.ignore() or getchar()       //ignores an end of line character
*/

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string.h>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    int a;
    double b;
    string c;

    cin>>a;
    cin>>b;
    cin.ignore();               //ignores an end of line character
//    getchar();
    getline(cin,c);

    cout<<a + i<<endl;          //concatenate of strings
    printf("%.1lf\n",b+d);

    cout<<s + c<<endl;

}
//    cout<<b + d<<".0"<<endl;
/*/
    #include <iostream>
    #include <cstdio>
    using namespace std;
    int main()
    {
        char str[100];
        cout << "Enter a string: ";
        gets(str);
        cout << "You entered: " << str;

        return 0;
    }
/*/
