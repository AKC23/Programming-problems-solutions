#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

void update(int *a,int *b) {

    int res1,res2;
    res1 = *a + *b;
    res2 = abs(*a - *b);

    *a = res1;
    *b = res2;

}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(&a, &b);

    printf("%d\n%d", a, b);

    return 0;
}
