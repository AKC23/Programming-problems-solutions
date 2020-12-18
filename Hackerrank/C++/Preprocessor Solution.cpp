/*
Problem's Name: Preprocessor Solution
Problem's link: https://www.hackerrank.com/challenges/preprocessor-solution/problem
Submission's link: https://www.hackerrank.com/challenges/preprocessor-solution/submissions/code/191960533
Date: Friday, December 18,2020
*/

int i =0;
#define foreach(v, i) for(i=0;i<v.size();i++)                                       //for loop
#define INF 100000000
#define io(v) cin>>v                                                                //for input
#define toStr(x) #x                                                                 //for output
#define FUNCTION(name, op) void name(int& a, int b) { if (b op a) a = b; }          //for maximum and minimum input

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions                                             //error message
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)


int main()
{
	int n; 
    cin >> n;
	
    vector<int> v(n);
	foreach(v, i) 
    {
		io(v)[i];
	}
	
    int mn = INF;
	int mx = -INF;
	
    foreach(v, i) 
    {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	
    int ans = mx - mn;
	
    cout << toStr(Result =) <<' '<< ans;
	
    return 0;

}