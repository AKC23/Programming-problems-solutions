#include<iostream>
#include<iterator>
#include<map>
#include<cstring>

using namespace std;

int main()
{
    int i=0,Q=0,type=0,Y=0;
    string X;
    cin>>Q;

    map <string, int> m;
    map <string, int> :: iterator it;

    for(i=0; i<Q; i++)
    {
        cin>>type>>X;

        if(type==1)
        {
            cin>>Y;
            m[X] += Y;
        }
        else if(type==2)
        {
            m.erase(X);
        }
        else
        {
            cout<<m[X]<<endl;
        }
    }

    return 0;
}
