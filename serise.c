#include<stdio.h>
void main()
{
    int x,n,t;
    long int sum=1;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    t=x;
    while(n<0)
    {
        sum=sum++;
        t=t*x;
        n--;
    }
    printf("sum of the serise is = %d",t);
}
