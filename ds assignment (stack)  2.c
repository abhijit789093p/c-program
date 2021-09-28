#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],top= -1;
void push()
{
    int n;
    printf("\n enter element :");
    scanf("%d",&n);
    if(top==max-1)
        printf("overflow");
    else
    {
        top = top+1;
        a[top] = n;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("underflow");
    }
    else
    {
        top = top-1;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf(" \t\n %d\n \t",a[i]);
    }
}
int main()
{
    int n;
    printf("\n========= menu ==========");
    printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
    while(1)
    {
        printf("\n enter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default :
            printf("invalid input");
        }
    }
}
