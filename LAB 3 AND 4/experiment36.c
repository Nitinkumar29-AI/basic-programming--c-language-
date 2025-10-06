/*36. PROGRAM TO PRINT 1,3,5,7,9………N. 
code by nitin
roll no A20   */
#include<stdio.h>
int main()
{
    int num1,i,n;
    printf("enter the number till you want to print sequence: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d", (1+2*i));
        printf(",");
    }
}