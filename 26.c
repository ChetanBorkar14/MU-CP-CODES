/*
1   
1 21    
1 21 321    
1 21 321 4321   
…
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Entr the value of n:");
    scanf("%d", &n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                for(int k=j;k>=1;k--)
                {
                    printf("%d",k);
                }
                printf(" ");
            }
        printf("\n");
        }
    return 0;
}
