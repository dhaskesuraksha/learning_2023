
#include <stdio.h>

int big(int a,int b)
{
    (a>b)?printf("a is big"):printf("b is big");
}

int main()
{
int a,b;
scanf("%d%d",&a,&b);
big(a,b);

    return 0;
}
