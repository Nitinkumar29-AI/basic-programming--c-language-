// USING MULTIDIMENSIONAL ARRAY
#include<stdio.h>
int main()
{
float headCircumference[6] = {20.5, 21.0, 21.5, 22.0, 22.5, 23.0};
float hatSize[6] = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125};
int i;
float n;
int count=0;
printf("enter your head curcumference ");
scanf("%f",&n);
for (i=0;i< 6;i++)
{   
    if(headCircumference[i]==n)    
    {
        printf("the correct hat size is %.3f",hatSize[count]);
        return 0;
    }
    else 
    { 
        count++;
    }
}

}