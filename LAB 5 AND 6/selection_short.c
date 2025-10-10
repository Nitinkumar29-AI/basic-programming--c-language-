#include<stdio.h>
int main()
{
    int ar[5];
    int i,j,k;
    int temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array 1\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(ar[j]>ar[i])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    printf("after shorting");
    for(i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}