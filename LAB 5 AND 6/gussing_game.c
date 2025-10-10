//THE GUSSING GAME 

#include<stdio.h>
int main()
{   int i,input;
    int ar[50]={1,2,5,8,9,10,12,13,15,17,20,21,24,27,29,31,33,37,39,42,44,47,49};
    int flag=0;
     
    printf("enter  the number and try your luck : ");
    scanf("%d",&input);
    for(i=0;i<50;i++)
    {         
        if (ar[i]==input)
        {
                flag=1;
                 break;
        }
    }
    if(flag==1)
    {
        printf("congratulations you choose the lucky number %d",input);
    }
    else
    {
        printf("you loosee try AGAIN");    
    }
    return 0;
}