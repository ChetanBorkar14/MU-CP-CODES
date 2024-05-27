//Write a program to design a structure Employee with members Employee No, Employee Name, Experience and salary. Read the information of 100 employees and display employee information that is having 5 years or more experience and salary less than Rs. 10,000.
#include <stdio.h>

typedef struct
{
    char ename[100];
    int exp;
    int sal;
} employe;

void main ()
{
    int n,i;
    printf ("no. of employes: ");
    scanf ("%d", &n);
    employe e[n];

    printf ("Enter Employe details: \n ");
    for (i=0;i<n;i++)
    {
        printf ("Employe %d \n", i+1);
        printf ("Employe name: ");
        getchar();
        fgets (e[i].ename, 98, stdin);
        printf ("Experience: ");
        scanf ("%d", &e[i].exp);
        printf ("salary: ");
        scanf ("%d", &e[i].sal);
    }

    printf ("\n Employes with more than 5 years of experience or less than 10000 salary are: \n");
    for ( i = 0; i <n; i++)
    {
        if (e[i].exp >= 5 || e[i].sal<10000)
        {
            printf ("\n");
            printf ("Employe name: %s", e[i].ename);
            printf ("Employe Experience: %d \n", e[i].exp);
            printf ("Employe salary: %d \n", e[i].sal);
        }
        
    }
}