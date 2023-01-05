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
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
}
int main()
{
    char s1[100];
    char s2[100] = "arik";
    sE(s1, s2);
    printf("%s", s1);
}