/*PROGRAM TO CHECK WHEATHER THE NUMBER IS ARMSTRONG OR NOT
CODE BY NITIN 
ROLL NO A20*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0, remainder;                 // defining variables
    printf("Enter a number: ");
    scanf("%d", &num);
     temp = num;
    while (temp != 0) {
        temp = temp / 10;                                       // counting of digits
        digits++;
    }
    temp = num;                                                             
    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);                                  // remainder^digits
        temp = temp / 10;
    }
    if (num == sum)
        printf("%d is an Armstrong number.\n", num);                   // condition checking
    else
        printf("%d is not an Armstrong number.\n", num);

     return 0;
}