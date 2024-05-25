//Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>

int main()
{
    int a,b;
    int sum, sub, mult, mod;
    float divi;

    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    divi =(float)a / b;
    mod = a % b;

    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", divi);
    printf("MODULUS = %d", mod);

    return 0; 
}
