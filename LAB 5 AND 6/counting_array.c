#include<stdio.h>
int main()
{
    int ar[11];
    int i,j;
    int oddcount=0,totalcount=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array is");
     for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);
    }
    for(i=0;i<10;i++)
    {   
        totalcount++;
        if(ar[i]%2!=0)
        {
            oddcount++;
        }
        
    }
    printf("\ntotal no of odd elements in array is %d \n total numbe of element in array %d",oddcount,totalcount);
}