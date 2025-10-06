/* PROGRAM TO FINDOUT MAX AND SECOND MAX FROM N NUMBERS
CODE BY NITIN 
ROLL NO A20 */
#include <stdio.h>

int main() {
    int n, i, num;
    int max, second_max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    printf("Enter number 2: ");
    scanf("%d", &num);

    if (num > max) {
    second_max = max;
        max = num;
    } else {
        second_max = num;
    }

    for (i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num < max) {
            second_max = num;
        }
    }

    printf("\nMaximum = %d\n", max);
    printf("Second Maximum = %d\n", second_max);

   return 0;
}