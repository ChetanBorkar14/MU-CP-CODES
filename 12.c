//C program to create Simple Calculator using switch case
#include <stdio.h>

int main()
{
    char op;
    float num1, num2,result;

    printf ("Enter first number = ");
    scanf ("%f", &num1);
    printf ("Enter second number = ");
    scanf ("%f", &num2);
    printf ("Choose operator to perform operations = ");
    scanf (" %c", &op);
    result = 0;
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}