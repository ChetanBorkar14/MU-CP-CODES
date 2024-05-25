//C program to find maximum between two numbers
#include <stdio.h>
int main()
{
    int a, b,max;

    /* Input two numbers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    /* If num1 is maximum */
    if(a>b)
    {
        printf("%d is maximum", a);        
    }
    else
    {
        printf("%d is maximum", b);
    }
    return 0;
}