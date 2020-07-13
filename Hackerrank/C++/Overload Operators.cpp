/**
Operator Overloading
https://www.hackerrank.com/challenges/overload-operators/problem
*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1,v2,i;
        v1 = v2 = i = 0;

        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            cout<<v1;
            i++;
        }
//        cout<<endl;
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
//        cout<<endl;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            cout<<v2;
            i++;
        }
//        cout<<endl;
        a=v1;
        b=v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

/** 1st process */
Complex operator+(Complex &x, Complex &y)
{
    Complex c;
    c.a = x.a + y.a;
    c.b = x.b + y.b;

    return c;
}

ostream &operator <<(ostream &out, Complex &c)
{
    out<< c.a << "+i" << c.b;
    return out;
}

/** 2nd process */
//Complex operator+(const Complex &a, const Complex &b) {
//
//    return { a.a + b.a, a.b + b.b };
//}
//
//ostream& operator<<(ostream &os, const Complex &c) {
//
//    return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
//}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}



