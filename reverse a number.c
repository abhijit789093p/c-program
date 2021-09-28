#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,v=0;
    printf("enter any number to see it's reverse order: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        v=(v*10)+r;
        n=n/10;
    }
    printf("reverse number is:%d",v);

}
