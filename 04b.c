//C progrm to Display whether a given integer is a perfect square. without using sqrt function
#include <stdio.h>
int main()
{
    int i, number, flag;
    flag = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 1)
    {
        printf("%d is a Perfect Square. Its square root is 1.\n", number);
        flag = 1;
    }
    for (i = 2; i <= number / 2; i++)
    {
        if (number == i * i)
        {
            printf("%d is a Perfect Square. Its square root is %d.\n", number, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is not a Perfect Square.\n", number);
    return 0;
}
