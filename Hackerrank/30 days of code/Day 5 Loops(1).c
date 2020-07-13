
#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    int i,result;

    if(n>=2 && n<=20)
    {
        for(i=1; i<=10; i++)
        {
            result = n * i;
            printf("%d x %d = %d\n",n,i,result);

        }
    }

}

