#include<stdio.h>
#include<math.h>
void main()
{
    int i,r,r1,d;
    printf("enter two number :");
    scanf("%d",&d);
    r = sqrt(d);
    if (r*r == d)
        printf("it is a perfect squre");
    else
        printf("no it is not");
}
