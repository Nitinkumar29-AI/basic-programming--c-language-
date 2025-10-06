/*39. PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N. 
code by NITIN
ROLL NO A20 */
#include<stdio.h>
int main()
{
    long int num,i=1,prod=1;
    printf("enter the number till you want to print series: ");
    scanf("%d",&num);
    while(i<=num)
    {
        prod=prod*i;
        printf("%ld/%ld +",i,prod);
        i++;
    }
}