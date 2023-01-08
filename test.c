#include <stdio.h>
#pragma pack(1)
#include <string.h>
struct Student
{
    char name[100];
    int age;
    int id;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", arr[i].name, &arr[i].age, &arr[i].id);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                char TempName[100];
                strcpy(TempName, arr[j].name);
                int tempID = arr[j].id;
                int tempAge = arr[j].age;
                arr[j].id = arr[j + 1].id;
                arr[j].age = arr[j + 1].age;
                arr[j + 1].id = tempID;
                arr[j + 1].age = tempAge;
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j + 1].name, TempName);
            }
            else if (arr[j].id > arr[j + 1].id)
            {
                char TempName[100];
                strcpy(TempName, arr[j].name);
                int tempID = arr[j].id;
                int tempAge = arr[j].age;
                arr[j].id = arr[j + 1].id;
                arr[j].age = arr[j + 1].age;
                arr[j + 1].id = tempID;
                arr[j + 1].age = tempAge;
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j + 1].name, TempName);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", arr[i].name, arr[i].age, arr[i].id);
    }
}