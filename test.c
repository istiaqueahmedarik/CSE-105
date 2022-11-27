#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);          //<-----------ei line e input nisi
    int even1 = 0, even2 = 0; //<---eigulay variable initilize krsi...ami shobeceye boro duita odd and even nibo tai
    int odd1 = 0, odd2 = 0;
    for (int i = 0; i < n; i++) //<------input er jnno loop
    {
        int temp;
        scanf("%d", &temp); //<----input nitesi
        if (temp % 2 == 0)  //<---check krlam input ta jor kina
        {
            if (even1 < temp) //<---check krtesi eta ki max even er caiteo bro kina
            {
                int temps = even1; //<--boro hoile 2nd largest even e ager max value ta swap krsi
                even1 = temp;
                even2 = temps;
            }
            else if (temp > even2)
            {
                even2 = temp; //<----jdi shobceye boro max even er caiteo boro na hoy taile check kri 2nd tar caite boro kina
            }
        }
        else //<----ager moto same kaj odd er jnneo krsi
        {
            if (odd1 < temp)
            {
                int temps = odd1;
                odd1 = temp;
                odd2 = temps;
            }
            else if (temp > odd2)
            {
                odd2 = temp;
            }
        }
    }
    if (even1 + even2 > odd1 + odd2 || (odd1 == 0 || odd2 == 0)) //<--ekhane check krsi je jogfol boro kar sathe jdi emn hoy kono odd i nai list e tai oitao sure krsi...jeta boto seitai ans
    {
        printf("%d\n", even1 + even2);
    }
    else
    {
        printf("%d\n", odd1 + odd2);
    }

    return 0;
}