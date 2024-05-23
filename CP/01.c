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

/*
The code uses (float) to convert an integer variable a to a floating-point number before division. This ensures that the division operation produces a floating-point result with decimal precision, preventing loss of accuracy that could occur with integer division.*/