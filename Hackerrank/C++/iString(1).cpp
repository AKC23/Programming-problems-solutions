/**
Have to learn STL(map,vector) and stringstream
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char n[1000000];

    gets(n);

    for(int i=0;n[i] != '\0';i++)
    {
        if(n[i] == ',')
        {
            printf("\n");
            i++;
        }
        cout<<n[i];
    }

    return 0;
}
