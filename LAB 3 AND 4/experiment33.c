/*PROGRAM TO FINDOUT MAX AND MIN FROM N NOS
CODE BY NITIN
ROLL NO A20 */
#include<stdio.h>
int main()
{       
      int num,n,j,max,min;
      printf("tell how many number you want to enter: ");
      scanf("%d",&n);
      printf("enter number 1: ");
      scanf("%d",&num);
        max=min=num;
      for(j=2;j<=n;j++)
        {
     printf("\nenter you number: ");
        scanf("%d",&num);
      if( num>max)
           {
             max=num;
           }
        if (min>num)
        {
            min=num;
        }
        }
        printf(" your maximum number is %d",max);
        printf("\n your minimum number is %d",min);
        
}