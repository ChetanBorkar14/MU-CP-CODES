//C program to find the maximum integer in the given 2-d matrix
#include <stdio.h>
int main() 
{
    int a[10][10];
    int r, c,i,j,k,max;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("\nEnter matrix elements:\n");
    for (i=0;i<r;++i)
    for (j=0;j<c;++j) 
    {
      printf("Enter elemnet a%d%d: ", i+1,j+1);
      scanf("%d",&a[i][j]);
    }
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
        printf("%d  ",a[i][j]);
        if (j ==c-1)
        printf("\n");
    }
    max=a[0][0];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        if(a[i][j]>max)
            {
                max=a[i][j];
            }
    }
    printf("Maximum integer is %d" ,max);
    }
