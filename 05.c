//C program to enter marks of five subjects and calculate total, average and percentage
#include <stdio.h>

int main()
{
    int math, phy, chem, eg, cp ; 
    float average, percentage ,total;

    printf("Enter marks of five subjects: \n");
    scanf("%d%d%d%d%d", &math, &phy, &chem, &eg, &cp);

    total = math + phy + chem + eg + cp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}
