/*   1
    12
   123
  1234
 12345
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    int k;
    printf("enter the rows you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
            printf(" ");
        {   
            for(k=1;k<=i;k++)
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}