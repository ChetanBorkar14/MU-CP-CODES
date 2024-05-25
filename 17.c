// C program to check given number is Armstrong number or not
#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    printf("Enter the number=");    
    scanf("%d",&n);    
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    }    
    if(temp==sum)    
        printf("It is an armstrong  number ");    
    else    
        printf("It is not an armstrong number");    
    return 0;  
}   
