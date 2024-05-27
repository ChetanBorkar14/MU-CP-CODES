/*Accept a record of only 1 student. Record of a student has following information: Name 
(single entity which contains space separated name, middle name, surname), Age, email id,
 overall GPA*/
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char email[50];
    float overallGPA;
};

int main() 
{
    struct Student student;

    printf("Enter student details:\n");
    printf("Name (First Middle Last): ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Age: ");
    scanf("%d", &student.age);
    printf("Email ID: ");
    scanf("%s", student.email);
    printf("Overall GPA: ");
    scanf("%f", &student.overallGPA);

    printf("\nStudent Information:\n");
    printf("Name: %s", student.name);
    printf("Age: %d\n", student.age);
    printf("Email ID: %s\n", student.email);
    printf("Overall GPA: %.2f\n", student.overallGPA);

    return 0;
}
