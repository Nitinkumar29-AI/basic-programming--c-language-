#include<stdio.h>
int main()
{
    int ar[10],arb[10],add[10];
    int i,j,k;
    int temp;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array 1\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\nenter 2nd array");
    for(j=0;j<10;j++)
    {
        scanf("%d",&arb[j]);
    }
    printf("array 2\n");
    for(j=0;j<10;j++)
    {
        printf("%d\t",arb[j]);
    }
    for(j=0;j<10;j++)
    {
        temp=ar[j];
        ar[j]=arb[j];
        arb[j]=temp;
    }
    printf("\nswapped array\n\n");
     printf("array 1\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\narray 2\n");
    for(j=0;j<10;j++)
    {
        printf("%d\t",arb[j]);
    }
}