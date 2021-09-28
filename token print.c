#include<stdio.h>
void main()
{
    char a[50];
    int i,m;
    printf("enter sentences");
    gets(a);
    for(i = 0; a[i]!='\0';i++)
    {
        m = a[i];
        printf("%d",m);
         if(m == "32")
       {
           printf("\n");
       }
       else
       {
            printf("%c",a[i]);
       }

    }

}
