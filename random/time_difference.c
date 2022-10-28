#include <stdio.h>
#include <math.h>
int main()
{
    /*
    1. We first take in the starting time and ending time.
    2. We then calculate the difference in hours and minutes separately.
    3. We then calculate the difference in minutes.
    4. We then calculate the difference in hours.
    5. We then print the difference in hours and minutes.
    */
    int h1, h2, m1, m2, changeh, changem;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    changeh = fabs(h2 - h1) - 1;
    changem = m2 + (60 - m1);
    if (changem >= 60)
    {
        changeh++;
        changem = changem - 60;
    }
    if (h2 < h1)
    {
        changeh = changeh - 12;
    }
    printf("%d %d", changeh, changem);
    return 0;
}