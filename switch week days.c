#include<stdio.h>
void main()
{
    int d;
    printf("enter the number between 1 to 7:");
    scanf("%d",&d);
    switch(d)
    {

    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invalid charcter");
    }
}
