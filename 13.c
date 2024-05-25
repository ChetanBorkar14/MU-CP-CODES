// C program to display all even numbers from 1 to n using while loop
#include <stdio.h>

int main()
{
    int i=2, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    printf("All even numbers from 1 to %d are: \n", n);
    while(i<=n)
    {
        printf("%d  ", i);
        i += 2;
    }
    return 0;
}