#include<stdio.h>
int main()
{
    int ar[100];
    int i,j,n;
    int temp;
    printf("enter the number you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array 1 ");
     for(i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
            if(ar[i]>ar[j])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
       }
    }
    printf("\nmaxm number in the array is %d \nsec max number in the array %d",ar[0],ar[1]);
    return 0;
    
}