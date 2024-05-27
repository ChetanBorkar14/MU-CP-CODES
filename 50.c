//C program to sort an array using pointer in ascending order
#include <stdio.h>

void inputArray(int *arr, int size)
{
    for (int *ptr=arr;ptr<arr+size;ptr++)
    {
        scanf("%d",ptr);
    }
}

void printArray(int*arr,int size)
{
    for (int *ptr=arr;ptr<arr+size;ptr++)
    {
        printf("%d ",*ptr);
    }
    printf("\n");
}

void sortAscending(int *arr, int size)
{
    for (int *i=arr;i<arr+size-1;i++)
    {
        for (int *j=i+1;j<arr+size;j++)
        {
            if (*i> *j)
            {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main()
{
    int arr[100];
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(arr, size);

    printf("\nElements before sorting: ");
    printArray(arr, size);

    printf("\nArray in ascending order: ");
    sortAscending(arr, size);
    printArray(arr, size);

    return 0;
}