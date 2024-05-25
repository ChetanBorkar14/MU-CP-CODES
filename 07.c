//C program to count total of zeros and ones in a binary number using bitwise operator
#include <stdio.h>
int main()
{
    int num, zero=0, one=0, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=0; i<8; i++)
    {
        if(num & 1)
            one++;
        else
            zero++;
        num >>= 1;
    }

    printf("Total 0 bit is %d\n", zero);
    printf("Total 1 bit is %d", one);

    return 0;
}