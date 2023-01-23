#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct student s;
    printf("Enter information:\nEnter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("Displaying Information:\nName: %sRoll number: %d\nMarks: %d\n", s.name, s.roll, s.marks);
}