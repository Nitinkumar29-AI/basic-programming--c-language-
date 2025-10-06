/*PROGRAME TO PRINT TABLE OF ANY NUMBER.
CODE BY- NITIN 
ROLL NO A20*/
#include<stdio.h>                                                    // header file
int main(){
    int num1,i,table;                                                // variable
    printf("enter the numner whose table you want to write: ");
    scanf("%d",&num1);                                             // taking input
    for(i=1;i<=10;i++)
    {
        table =num1*i;                                              //looping
        printf("%d",table);                                
        printf("\n");
    }
    
    return 0;
}

