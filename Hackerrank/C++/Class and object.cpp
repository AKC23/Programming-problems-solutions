#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include<bits/stdc++.h>


class Student
{
public:
    int i,j,ar[100],n,x=3,scores[20],c=0,sum=0;

    void input()
    {

        for(j=0; j<5; j++)
        {
            cin>>ar[j];
        }

    }

    int calculateTotalScore()
    {
        sum = 0;
        for(j=0; j<5; j++)
        {
            sum = sum + ar[j];
        }
        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
