#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    printf("===========menu============= \n 1. ADDITION \n 2. SUBSTRACTION \n 3. MULTIPLICATION \n 4. DIVISION \n 5. EXIT \n ");
    do
    {

        printf("\n enter your choice from the above menu:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            divn();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice");
        }
    }

    while(ch<=5);
    return 0;
}
int add()
{
    int num1,num2,res;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    res= num1+num2;
    printf("sum of two number is = %d \n",res);
}
int sub()
{
    int num1,num2,res;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    res = num1-num2;
    printf("substraction of two number is = %d \n",res);
}
int mul()
{
    int res,num1,num2;
    printf("\n enter two number:");
    scanf("%d%d",&num1,&num2);
    res = num1 * num2;
    printf("\n multiplication of two number is %d \n:",res);
}
int divn()
{
    int res,a,b;
    printf("\n enter two number:");
    scanf("%d%d",&a,&b);
    res = a/b;
    printf("division of two number:%d \n",res);
}
