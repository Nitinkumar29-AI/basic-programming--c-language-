/* WRITE A PROGRAM IN C FOR THE FOLLOWING.AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS    
   FOLLOWS.  
code by nitin
roll no A20 */

#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("enter your unit you consumed this month :");
    scanf("%d",&units);
    if (0<=units && units<=200)
    {
        bill=0.50*units;
        printf("your bill is %.2f",bill);
    }
    else if (201<=units && units<=400)
    {
        bill=100+((units-200)*0.65);
        printf("your bill is %.2f",bill);
    }
    else if (401<=units && units<=600)
    {
        bill= 230 +((units-400)*0.80);
        printf("your bill is %.2f",bill);
    }
    else if (units>600)
    {
        bill =425 + ((units-600)*1.25);
        printf("your bill is %.2f",bill);
    }
}