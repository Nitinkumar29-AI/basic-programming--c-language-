/*PROGRAM TO ADD SUM OF ALL ODD AND EVEN NUMBER BETWEEN 1 TO N 
CODE BY nitin 
ROLL NO A20 */
#include<stdio.h>
int main(){
    int n,sum1=0,sum2=0,j;                                       // defining variables 
    printf("enter your number here i.e value of n: ");           // taking input
    scanf("%d",&n);
    for(j=1;j<=n;j++)                                            //for loop
      { if(j%2==0)
           {sum1=sum1+j;}
       else                                                     // conditional operator
           {sum2=sum2+j;}
      }
      printf("sum of odd numbers in it is = %d",sum2);
       printf("\nsum of even numbers in it is = %d",sum1);         // printing output
}