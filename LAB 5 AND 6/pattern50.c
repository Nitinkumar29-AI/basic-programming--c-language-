#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("enter the number of roes you want to print : ");
    scanf("%d",&n);
    for(i=65;i<n+65;i++)
    {
        for (j=65;j<=i;j++)
        printf("%c",i);
        printf("\n");
    }
    return 0;
}