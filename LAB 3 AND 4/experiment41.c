/*41. READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28) 
code by NITIN
ROLL NO- A20*/
#include<stdio.h>
int main ()
{
    int num,i;
    printf("enter the number which you want to do factor: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    if (num%i==0)
    {
        printf("%d",i);
        printf(" , ");
    }
    
}
