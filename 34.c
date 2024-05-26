//C program to merge two sorted array in ascending order
#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], mergeArray[100];
    int size1, size2, mergeSize,index1=0, index2=0, mergeIndex;

    printf("Enter the size of first array : ");
    scanf("%d", &size1);
    printf("Enter elements in first array : ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);
    printf("Enter elements in second array : ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    mergeSize = size1 + size2;
    for(mergeIndex=0;mergeIndex<mergeSize;mergeIndex++)
    {
        if(index1>=size1 || index2>=size2)
        {
            break;
        }
        if(arr1[index1]<arr2[index2])
        {
            mergeArray[mergeIndex]=arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex]=arr2[index2];
            index2++;
        }
    }
    while(index1 < size1)
    {
        mergeArray[mergeIndex]=arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex]=arr2[index2];
        mergeIndex++;
        index2++;
    }
    printf("\nArray merged in ascending order : ");
    for(int i=0; i<mergeSize; i++)
    {
        printf("%3d ", mergeArray[i]);
    }
    return 0;
}