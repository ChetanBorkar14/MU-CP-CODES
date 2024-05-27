//C program to check whether a string is palindrome or not
#include <stdio.h>
int main()
{
    char str[100];
    int len, startIndex, endIndex;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    len = 0;
    while (str[len] !='\0') 
    {
        if (str[len] =='\n') 
        {
            str[len] ='\0';
            break;
        }
        len++;
    }

    startIndex = 0;
    endIndex = len - 1;
    while (startIndex <= endIndex)
    {
        if (str[startIndex] != str[endIndex])
            break;

        startIndex++;
        endIndex--;
    }

    if (startIndex >= endIndex)
    {
        printf("String is Palindrome.\n");
    }
    else
    {
        printf("String is Not Palindrome.\n");
    }
    return 0;
}
