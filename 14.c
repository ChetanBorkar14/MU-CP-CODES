//C program to count number of digits in an integer
#include <stdio.h>
int main()
{
    int num,count= 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);

    return 0;
}