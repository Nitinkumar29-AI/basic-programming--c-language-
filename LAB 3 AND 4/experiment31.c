/* PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A N DIGIT NUMBER
CODE BY NITIN 
ROLL NO A20 */
#include<stdio.h>
int main()
{
    int num1;
    int sum=0;                                                          //defining variables
    printf("enter your number sum of n digit mumber you want: ");
    scanf("%d",&num1);                                                   //taking input
    while(num1 != 0)
    {                                                                  // while loop
        sum=sum+(num1%10);
        num1=num1/10;
    }
   printf("your sum is %d",sum);                                       //output
   
    return 0;
}