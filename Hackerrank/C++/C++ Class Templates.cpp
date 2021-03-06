#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';                                      //#define changes endl to '\n'
#define concatenate add

template <class T>class AddElements
{
public:
    T element;
    AddElements(T x)
    {
        element = x;
    }
    T add(T y)
    {
        return element + y;
    }
};
/* 
    static start_up function speeds up cout and #define changes endl to '\n', that prevents flushing buffer for each line.
*/
int start_up() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

int main () 
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) {
        string type;
        cin >> type;
        if(type=="float") 
        {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int") 
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string") 
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
