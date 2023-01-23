#include <stdio.h>
#include <string.h>
#pragma pack(1)
struct Student
{
    char name[100];
    int id;
    int age;
};
void sE(char s1[], char s2[])
{
    int i;
    for (i = 0; s2[i] != '\0'; i++)
    {

        s1[i] = s2[i];
    }
    s1[i] = '\0';
}
int main()
{
    int n;
    printf("NO. of Total Student: ");
    scanf("%d", &n);
    getchar();
    struct Student studentList[n];
    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        gets(studentList[i].name);
        printf("ID: ");
        scanf("%d", &studentList[i].id);
        printf("AGE: ");
        scanf("%d", &studentList[i].age);
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (studentList[j].age > studentList[j + 1].age)
            {
                int temp = studentList[j].age;
                int temp1 = studentList[j].id;
                char s[100];
                sE(s, studentList[j].name);
                studentList[j].age = studentList[j + 1].age;
                studentList[j].id = studentList[j + 1].id;
                sE(studentList[j].name, studentList[j + 1].name);
                studentList[j + 1].age = temp;
                studentList[j + 1].id = temp1;
                sE(studentList[j + 1].name, s);
            }
            else if (studentList[j].age > studentList[j + 1].age)
            {
                if (studentList[j].id > studentList[j + 1].id)
                {
                    int temp = studentList[j].age;
                    int temp1 = studentList[j].id;
                    char s[100];
                    sE(s, studentList[j].name);
                    studentList[j].age = studentList[j + 1].age;
                    studentList[j].id = studentList[j + 1].id;
                    sE(studentList[j].name, studentList[j + 1].name);
                    studentList[j + 1].age = temp;
                    studentList[j + 1].id = temp1;
                    sE(studentList[j + 1].name, s);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("----------------------------------\n");
        printf("INFO of #%d:\n", i + 1);
        puts(studentList[i].name);
        printf("%ID: %d\n", studentList[i].id);
        printf("AGE: %d\n", studentList[i].age);
    }
}