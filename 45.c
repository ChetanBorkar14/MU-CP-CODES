//C program to find sum of array elements using recursion
#include <stdio.h>

int sum(int arr[], int start, int len) 
{
    if(start >= len)
        return 0;
        
    return (arr[start] + sum(arr, start + 1, len));
}

int main()
{
    int arr[100];
    int N, i, sumarr;
    
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumarr= sum(arr, 0, N);
    printf("Sum of array elements: %d", sumarr);
    
    return 0;
}