//C program to find multiplication of a matrix.
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],ra,ca,rb,cb;
    printf("Enter the number of rows and columns for the first matrix\n ");
    scanf("%d %d", &ra,&ca);

    printf("\nEnter  the elements of the first matrix:\n");
    for(int i=0;i<ra;++i)
    for(int j=0;j<ca;++j) 
    {
        printf("Enter elemnet a%d%d: ", i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    printf("Enter the number of rows and columns for the second matrix\n ");
    scanf("%d %d",&rb,&cb);
    if (ca!=rb) 
    {
        printf("Error: The matrices cannot be multiplied.\n");
    } 
    else 
    {
        printf("\nEnter matrix elements:\n");
        for (int i=0;i<rb;++i)
        for (int j=0;j<cb;++j) 
        {
            printf("Enter elemnet b%d%d: ", i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        for (int i=0;i<ra;i++) 
        {
            for (int j=0;j<cb;j++) 
            {
                mul[i][j] = 0;
                for (int k=0;k<ca;k++)
                {
                    mul[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("The product of the two matrices is\n");
        for (int i=0;i<ra;i++)
        {
            for (int j=0;j<cb;j++) 
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}  
