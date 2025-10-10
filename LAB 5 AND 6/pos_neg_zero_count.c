#include<stdio.h>
int main()
{
    int ar[11];
    int i,j;
    int poscount=0,negcount=0;
    int zerocount=0;
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
        if(ar[i]>0)
        { 
            poscount++;  
        }
        else if(ar[i]<0)
        { 
            negcount++;
        }
        else if(ar[i]==0)
        { 
            zerocount++;
        }
    }    

    printf("\nyour total number of positive num is %d \nnegative number is %d\nzeros =%d",poscount,negcount,zerocount);
}
