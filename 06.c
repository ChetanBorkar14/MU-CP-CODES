//Write a C program to convert decimal to binary number system using bitwise operator.
#include <stdio.h>
int main()
{
    int num, index=8-1, i;
    int bin[8];
    printf("Enter any number: ");
    scanf("%d", &num);
    while(index >= 0)
    {
        bin[index] = num & 1;
        index--;
        num >>= 1;
    }
    printf("Converted binary: ");
    for(i=0; i<8; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}