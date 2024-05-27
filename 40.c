//C program to count total number of letters in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i=0,letters=0;
    printf("Enter any string: ");
    fgets(str,100, stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        }
        i++;
    }
    printf("Total number of letters = %d\n", letters);
    return 0;
}
