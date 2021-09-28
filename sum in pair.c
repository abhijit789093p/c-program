#include<stdio.h>
void main()
{
    int i,j,n,k,count = 0;
    printf("enter how many number of element u want to enter :");
    scanf("%d",&n);
    int a[n];
    printf("enter value :");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the target value :");
    scanf("%d",&k);
    //printf("the pairs are : ");
    for(i=0;i<n;i++)
    {
        //printf("%d\n",a[i]);
        for(j=i+1;j<n;j++)
        {
           // printf("%d \n",a[j]);
            if(a[i]+a[j]==k)
            {
                printf("%d,%d \n",a[i],a[j]);
                count = count + 1;
            }
        }
    }
    if(count == 0)
        printf("there is no pair in your value");
}
