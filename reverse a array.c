#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the length of the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter element :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array is : ");
    for(i=0;i<=n;i++)
        printf("%d",a[i]);

    for(i=0;i<n/2;i++)
    {
        n = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = n;
    }
    printf("\n \n reversed array :");
    for(i=0;i<=n;i++)
        printf("\n \n \n \n %d",a[i]);

}
