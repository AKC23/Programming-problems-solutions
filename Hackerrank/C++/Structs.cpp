
#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;

struct Student
{
    int age;
    char first_name[100];
    char last_name[100];
    int standard;
};

int main()
{
    Student st;


    cin>>st.age;
    cin>>st.first_name;
    cin>>st.last_name;
    cin>>st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
