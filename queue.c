#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],front=-1,rear=-1;

void insert_queue()
{
    int n;
    printf(" enter the element :");
    scanf("%d",&n);
    if(rear == max-1)
    {
        printf("overflow");
    }
    else if(rear == -1)
    {
        rear = rear+1;
        front = front+1;
        a[rear] = n;
    }
    else
    {
      rear = rear+1;
      a[rear] = n;
    }
}
void delete_queue()
{
    if(front == -1)
    {
        printf("underflow");
    }
    else if(front == rear)
    {
        front= -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
}
void display_queue()
{
    int i;
    if(rear == -1)
    {
        printf("empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf(" %d \n",a[i]);
        }
    }
}
int main()
{
    int m;
    printf("\n ========menu========");
    printf("\n 1. insert into queue \n 2. delete from queue \n 3.display the element \n 4. exit \n");
    while(1)
    {
        printf("\n enter your choice :");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            insert_queue();
            break;
        case 2:
            delete_queue();
            break;
        case 3:
            display_queue();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("invalid input");
        }
    }
    return(0);
}
