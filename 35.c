//C program to left rotate an array.
#include<stdio.h>
int main()
{
    int a[50];
    int i,j,k,temp,n,size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter elements : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number of places to be rotated by : \n");
    scanf("%d", &n);
    printf("Original array : \n");
    for(i=0;i<size;i++)
    {
        printf("%4d", a[i]);
    }
    for(j=1;j<=n;j++)
    {
        temp = a[size-1];
        for(k=size-2;k>=0;k--)
        {
            a[k+1]=a[k];
        }
        a[0]=temp;
    }
    printf("\nRotated array : \n");
    for(i=0;i<size;i++)
    {
        printf("%4d", a[i]);
    }
    return 0;
}
