/*write a C program to print values of Y USING FROMULA......
CODE BY- NITIN 
ROLL NO A20*/
#include<stdio.h>                                 // header file
#include<math.h> 
int main()
{ 
    int y,x,n;                                  // variable defining
    printf("enter your value of n: ");
    scanf("%d",&n);                               // taking input
    printf("enter your value of X: ");
    scanf("%d",&x);
    if (n==1)
    {                                         
       y=(1+x);}
    if (n==2)
    {      
        y=(1 + x/n);}                             // conditional operators and airthmatic operator
    if (n==3)
    {
        y=(1+pow(x,n));}
    if (n>3||n<1)
    {
        y=(1+n*x);}
    
    printf("your calculated result is %d",y);        // calulated result
        
    return 0 ;
}