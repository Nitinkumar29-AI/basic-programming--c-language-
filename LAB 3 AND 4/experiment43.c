/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW. 
code by nitin
roll no A20 */

#include<stdio.h>
int main()
{
    int sales;
    float commission;
    printf("enter how much sales you did: ");
    scanf("%d",&sales);
    if (sales<=500)
    {
        commission=(sales*5)/100;
        printf("your commission is on this sale is %.2f",commission);
    }
    else if(sales>500 && sales<=2000)
    {
        commission= (35+((sales-500)*10)/100);
        printf("your commission is on this sale is %.2f",commission);
    }
    else if (sales>2000 && sales<=5000)
    {
        commission=185 + ((sales-2000)*12)/100;
        printf("your commission is on this sale is %.2f",commission);
    }
    else if(sales>5000)
    {
        commission=(sales*12)/100;
        printf("your commission is on this sale is %.2f",commission);
    }
    printf("\ncongratulations you get commission keep it up !");

}
