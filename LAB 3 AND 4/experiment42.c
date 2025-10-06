/*42.  READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE. 
code by nitin
roll no A20 */
#include<stdio.h>
int main()
{
    int num,j;
    int flag=0;
    printf("enter the number which you want to check: ");
    scanf("%d",&num);
    for(j=2;j<num;j++)
   {
    if(num%j==0)
     flag=1;
   }
   if(flag==1)
   { printf("your entered number %d is composite",num);}
    else if(flag==0)
     {
     printf("your entered number %d is prime",num);
    }
}
