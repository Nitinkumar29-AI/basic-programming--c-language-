#include<stdio.h>
int main()
{
    int ar[11];
    int i,j;
    int sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array is");
     for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);
    }
    for(j=0;j<10;j++)
    {
        sum=sum+ar[j];
    }
    printf("\nsum of the array elements is : %d",sum);
    
    return 0;
}