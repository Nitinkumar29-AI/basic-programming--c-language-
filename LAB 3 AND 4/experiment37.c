/*37. PROGRAM TO PRINT 2,4,6,8,10,12………N.  
code by nitin
roll no A20   */
#include<stdio.h>
int main()
{
    int num1,i,n;
    printf("enter the number till you want to print sequence: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d", (2*i));
        printf(",");
    }
}