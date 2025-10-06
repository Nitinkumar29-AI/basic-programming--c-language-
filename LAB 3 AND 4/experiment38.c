/*38. PROGRAM TO PRINT 1,4,9,16,25,………N.  
code by nitin
roll no A20   */
#include<stdio.h>
#include<math.h>
int main()
{
    double i=1;
    int n;
    printf("enter the number till you want to print sequence: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%.0lf",pow(i,(double)2));
        printf(",");
        i++;
        
    }
}