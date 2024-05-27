//C program to count total number of words in a string
#include <stdio.h>
int main() {
    char str[100];
    int i=0, words=0;

    printf("Enter any string: ");
    fgets(str,100, stdin);
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
        {
            words++;
        }
        i++;
    }
    printf("Total number of words = %d", words);
    return 0;
}
