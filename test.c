#include <stdio.h>
struct
{
    char *engine;
} car1, car2;
int main()
{
    car1.engine = "tt vx 32";
    car2.engine = "ada lovelace 21";
    printf("%s\n%s", car1.engine, car2.engine);
}
