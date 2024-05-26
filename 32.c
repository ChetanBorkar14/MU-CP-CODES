//C program to count total number of even and odd elements in an array
#include <stdio.h>
int main()
{
    int arr[50];
    int i, size, even=0,odd=0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
    return 0;
}