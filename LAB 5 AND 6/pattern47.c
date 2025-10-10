/*
  A       
  AB                   
  ABC            
  ABCD      
  ABCDE
*/
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter the number you want to print : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=65;j<65+i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}