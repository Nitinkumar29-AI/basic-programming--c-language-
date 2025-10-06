/* 30.PROGRAM TO PRINT REVERSE OF A GIVEN NUMBER
CODE BY NITIN
ROLL NO A20 */
#include<stdio.h>
int main()
{
     int num1,q,sum=0;
    printf("enter number which you want to reverse: ");
     scanf("%d",&num1);                                        //taking input
    while(num1!=0)
    {
        q=num1%10;                                          //while loop
        sum=sum*10+q;
        num1=num1/10;
    }
    printf("%d",sum);
}