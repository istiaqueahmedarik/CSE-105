#include <stdio.h>
struct std
{
    int roll;
    char name[20];
    struct dates
    {
        int d;
        int m;
        int y;
    } date;
};

int main()
{
    FILE *op, *ip;
    ip = fopen("info.txt", "r");
    op = fopen("new.txt", "w");
    int n;
    fscanf(ip, "%d", &n);
    struct std s[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(ip, "%d %s %d %d %d", &s[i].roll, &s[i].name, &s[i].date.d, &s[i].date.m, &s[i].date.y);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(op, "%d %s %d %d %d", s[i].roll, s[i].name, s[i].date.d, s[i].date.m, s[i].date.y);
    }
    fclose(ip);
    fclose(op);
}