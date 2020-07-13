/*/
Grading Students

Lesson learnt : Use of mod, marks and grade
/*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,grades[n];

    for(i=0; i<n; i++)
    {
        cin>>grades[i];
    }

    for(i=0; i<n; i++)
    {
        if(grades[i]>=38)
        {
            if((grades[i]%5)>=3)
            {
                grades[i] = (grades[i] + (5 - (grades[i]%5)));
            }
        }
        cout<<grades[i]<<" ";
    }

    return 0;
}

