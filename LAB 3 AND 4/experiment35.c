/*35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
CODE BY nitin
roll no A20  */
#include<stdio.h>
int main()
{
  //DEFINING VARIABLES AND TAKING INPUT
    int num1,reminder;
    int sum;   
    printf("enter the number here: ");
    scanf("%d",&num1);
    
  //LOOPING WITH WHILE LOOP
    if(num1>9)
    { 
  
    while(num1>=9)
     {    
          sum=0;
          while (num1!=0)
      {
        reminder=num1%10;
        sum=sum+reminder;
         num1=num1/10;
      }
      num1=sum;
    }
        printf("single digit sum is %d",sum);
  }
  else
  printf("%d",num1);
 return 0;  
  
}