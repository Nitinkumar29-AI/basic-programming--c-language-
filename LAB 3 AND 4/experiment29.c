/*PROGRAM TO CHECK WHEATHER NUMBER IS PALANDROM OR NOT
CODE BY NIITN 
ROLLN NO A20 */
#include<stdio.h>
int main()
{
    int num,q,sum=0,x;                                                                   // defining vatriables 
    printf("enter your number here which you want to check wheather it is pallendrome or not: ");
    scanf("%d",&num);                                                                    //taking input
    x=num;
    while(num != 0)
    {                                                                                      //while loop
        q=num%10;
        sum=sum*10+q;
        num=num/10;
    }
    if(x==sum)
    {                                                                                                //conditionals
        printf("it is a pallindrome");
    }
    else
    {
        printf("number is not pallindrome");
    }
}