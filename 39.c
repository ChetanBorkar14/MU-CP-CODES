//C program to convert lowercase string to uppercase.
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}