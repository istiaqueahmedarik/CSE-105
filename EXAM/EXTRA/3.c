#include <stdio.h>
int main()
{
    char s[1000];
    FILE *ip;
    ip = fopen("input.txt", "r");
    fscanf(ip, "%s", s);
    printf("Hellow %s! Thank you for being the best students!", s);
    fclose(ip);
}