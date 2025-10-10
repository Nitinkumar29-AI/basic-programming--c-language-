#include<stdio.h>
#include<string.h>
int main()
{
    int ar[100];
    int num;
    printf("enter the number which you wqanty to print: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array is :\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\nreversed array \n");
    for(int i=num;i>=0;i--)
    {
        printf("%d\t",ar[i]);
    }
}