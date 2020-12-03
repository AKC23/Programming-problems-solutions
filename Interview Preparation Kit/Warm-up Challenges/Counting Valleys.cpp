/*
Problem's Name: Counting Valleys
Problem's Link: https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=warmup
Practice>>Algorithms>>Implementation>>Counting Valleys
Submission's link: https://www.hackerrank.com/challenges/counting-valleys/submissions/code/190083281
Date: 03/12/20(Thursday)
*/
#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int n,i,count,ans;
    n = i = count = ans = 0 ;
    string s;

    cin>>n;
    getchar();
    getline(cin,s);

    for(i=0;i<s.length();i++)
    {
        if(s[i] == 'U') {
            count++;
        }
        else if(s[i] == 'D')
        {
            count--;
        }
        if(count == 0 && s[i] == 'U')                   //if hiker returns to sea level
        {
            ans++;
        }
    }
    cout<<ans;   
    return 0;
}
