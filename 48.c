//C program to swap two arrays using pointers
#include <stdio.h>

void inputArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd)
        scanf("%d", arr++);
}

void printArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));
    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}

void swapArray(int * Arr1, int * Arr2, int size)
{
    int * Arr1End = (Arr1 + (size - 1));
    int * Arr2End = (Arr2 + (size - 1));

    while(Arr1 <= Arr1End && Arr2 <= Arr2End)
    {
        *Arr1 ^= *Arr2;
        *Arr2 ^= *Arr1;
        *Arr1 ^= *Arr2;
        Arr1++;
        Arr2++;
    }
}

int main()
{
    int Arr1[100];
    int Arr2[100];
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in first array: ", size);
    inputArray(Arr1, size);

    printf("Enter %d elements in second array: ", size);
    inputArray(Arr2, size);

    printf("\n\nfirst array before swapping: ");
    printArray(Arr1, size);

    printf("\nsecond array before swapping: ");
    printArray(Arr2, size);

    swapArray(Arr1, Arr2, size);

    printf("\n\nfirst array after swapping: ");
    printArray(Arr1, size);

    printf("\nsecond array after swapping: ");
    printArray(Arr2, size);
    return 0;
}