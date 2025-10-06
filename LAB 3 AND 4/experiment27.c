/*PROGRAM TO CHECK WEATHER THE NUMBER IS PRIME OR NOT
CODE BY NITIN
ROLL NO-A20*/
#include<stdio.h>
int main (){
   int n,j,flag=0;
   printf("enter the number here: ");
   scanf("%d",&n);
   for(j=2;j<n;j++)
   {
    if(n%j==0)
     flag=1;
   }
   if(flag==1)
   { printf("your entered number %d is not prime",n);}
    else if(flag==0)
     {
     printf("your entered number %d is prime",n);
    }
}