//C program to calculate factorial of a number
#include <stdio.h>

int main() {
    int num;
    long int fact = 1;

    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %ld\n", num, fact);
    }

    return 0;
}
