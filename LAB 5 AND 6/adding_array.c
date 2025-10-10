#include<stdio.h>
int main()
{
    int ar[10],arb[10],add[10];
    int i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array 1\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("enter 2nd array");
    for(j=0;j<10;j++)
    {
        scanf("%d",&arb[j]);
    }
    printf("array 2\n");
    for(j=0;j<10;j++)
    {
        printf("%d\t",arb[j]);
    }
    for(k=0;k<10;k++)
    {
        add[k] = ar[k]+arb[k];
    }
    printf("\nsummition array");
    for(i=0;i<10;i++)
    {
        printf("%d\t",add[i]);
    }   
    
}