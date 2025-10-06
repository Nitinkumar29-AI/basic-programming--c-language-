/*40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A 
LIST OF NUMBERS READ.
code by nitin
roll no A20 */
#include<stdio.h>
int main()
{
    int num,i=1,sum=0,sum1;
    {   while(i>0) 
      {
        printf("enter the number again: ");
        scanf("%d",&i);
       if(i>0)
        sum=sum+i;
        sum1=sum;
       
       }
}
    printf("your sum of positive number is %d",sum1);
}