#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:
    int age, standard;
    string first_name, last_name;

    void display()
    {
        cout<<age<<endl<<last_name<<", "<<first_name<<endl<<standard<<endl<<endl;
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
/**Should not use same type variable in parameter as first_name, last_name
It may show error
*/
    void setValue(int a,string fn, string ln, int st)
    {
        age = a;
        first_name = fn;
        last_name = ln;
        standard = st;
    }

};



int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;


    st.setValue(age,first_name,last_name,standard);
    st.display();

    return 0;
}

//    st.setValue(15,"john","carmack",10);

//    int get_age()
//    {
//        return age;
//    }

//    cout << st.get_age() << "\n";
