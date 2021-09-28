/* Prime number is a number which have only two divisor number that is the number it self and the number 1. the number it is called divisor
all the number are lessthan the number itself.
in that case i have to do the 0th thing is to find/ accept the number from the user.
 first thing that find all the number less than the given number to 1.
2nd thing i have to divide all the number to the given number.
3rd i have to count the number which are divisible by the given number.
4th if the divisor number are 2 then it is a prime number if it is not then it is a composite number.*/
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter any number:");
    scanf("%d",&n);
    i=n;
    while(i>=1)
        i--;
    printf("value of n:%d",i);
}
   /* //for(i=1;i<=n;i++)
    i=1;
      while(i<=n)
      {
          i++;
          if(n%i==0)
            count++;
      }



          /*if(n%i==0)
          count++;
    }
    if(count==0)
        printf("it is a prime number");
    else
        printf("it not a prime number");
}*/
