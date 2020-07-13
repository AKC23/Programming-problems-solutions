/**
https://www.hackerrank.com/challenges/30-class-vs-instance/problem
Lesson learnt : difference between a class and an instance
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

Person::Person(int initialAge)
{
        // Add some more code to run some checks on initialAge
    age = initialAge;

    if(age<0)
    {
        age = 0;
        cout<<"Age is not valid, setting age to 0."<<endl;
    }

}

void Person::amIOld()
{
    if(age<13)
    {
        cout<<"You are young.\n";
    }
    else if(age>=13 && age<18)
    {
        cout<<"You are a teenager.\n";
    }
    else
    {
        cout<<"You are old.\n";
    }
}

void Person::yearPasses()
{
    age++;
}

int main()
{
    int t;
	int age;

    cin >> t;

    for(int i=0; i < t; i++)
    {
    	cin >> age;

        Person p(age);

        p.amIOld();
        for(int j=0; j < 3; j++)
        {
        	p.yearPasses();
        }
        p.amIOld();

		cout << "\n";
//		cout << '\n';
    }

    return 0;
}
