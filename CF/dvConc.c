#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        int sum = 0;
        int oddCount = 0;
        int even = 0;
        int op = 0;
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            if (arr[i] % 2 != 0)
                oddCount++;
            else
                even++;
        }
        if (sum % 2 == 0)
        {
        }
        else
        {
            if (oddCount > even)
            {
                while (oddCount != 0)
                {

                    if (sum % 2 == 0)
                        break;
                    for (int i = 0; i < a; i++)
                    {
                        if (arr[i] % 2 != 0)
                        {
                            op++;
                            sum -= arr[i];
                            arr[i] /= 2;
                            sum += arr[i];
                            if (arr[i] % 2 == 0)
                            {
                                oddCount--;
                            }
                            if (sum % 2 == 0)
                            {
                                oddCount = 0;
                                break;
                            }
                        }
                    }
                }
            }
            else
            {
                while (even != 0)
                {

                    for (int i = 0; i < a; i++)
                    {
                        if (arr[i] % 2 == 0)
                        {
                            op++;
                            sum -= arr[i];
                            arr[i] /= 2;
                            sum += arr[i];
                            if (arr[i] % 2 != 0)
                            {
                                even--;
                            }
                            if (sum % 2 == 0)
                            {
                                even = 0;
                                break;
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", op);
    }
}