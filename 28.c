//C program to list all prime number between an interval using function.

#include <stdio.h>
int isPrime(int n)   
{  
    int i;
    for(i=2; i<=n/2; i++)    
    {
        if(n % i == 0)    
        {  
            return 0;  
        }    
    }
    return 1;  //you can take any number   
}

void printPrimes(int lb, int ub)  //lb means lower bound,ub means upper bound
{
    printf("All prime number between %d to %d are: ", lb, ub);
    while(lb<=ub)
    {
        if(isPrime(lb))
        {
            printf("%d ",lb);
        }
        lb++;
    }
}

int main()
{
    int lb, ub;
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d",&lb,&ub);
    printPrimes(lb,ub);
    return 0;
}