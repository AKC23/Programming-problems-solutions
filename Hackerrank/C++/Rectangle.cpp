#include <iostream>
using namespace std;


class Rectangle
{
public:

    int height=0,width=0,result=0;

    void display()
    {
        cout<<width<<" "<<height;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin>>width;
        cin>>height;
    }

    void display()
    {
        result = width * height;
        cout<<endl<<result;
    }
};

int main()
{

    RectangleArea r_area;

    r_area.read_input();

    r_area.Rectangle::display();

    r_area.display();

    return 0;
}
