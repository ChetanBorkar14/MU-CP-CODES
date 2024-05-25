/*   
1   
1 12       
1 12 123    
…
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                for(int k=1;k<=j;k++)
                {
                    printf("%d",k);
                }
                printf(" ");
            }
        printf("\n");
        }
    return 0;
}