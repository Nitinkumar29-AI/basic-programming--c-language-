/* PROGRAM TO PRINTOUT FIBONACCI SERIES
CODE BY NITIN
ROLL NO A20 */
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms: ");              // taking input
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (i = 1; i <= n; i++) {                            // for loop  
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf(" ");                                      // printing spaces                     
    return 0;
}