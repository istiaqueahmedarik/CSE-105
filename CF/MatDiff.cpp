#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int diff = n * n - 1;
        vector<int> val(n * n, 0);

        int prevR = 1;
        int prev = 1;
        for (int i = 0; i < n; i++)
        {
            if (diff > 0)
            {
                for (int j = 0; j < n; j++)
                {

                    if (j == 0 && i == 0)
                    {
                        cout << 1 << " ";
                    }
                    else if (j == 0)
                    {
                        if (prevR + diff <= n * n && val[prevR + diff] != 1)
                        {
                            cout << prevR + diff << " ";
                            val[prevR + diff] = 1;
                            prevR += diff;
                            prev += diff;
                        }
                        else if (prevR - diff > 0 && val[prevR - diff] != 1)
                        {
                            cout << prevR - diff << " ";
                            val[prevR - diff] = 1;
                            prevR -= diff;
                            prev -= diff;
                        }
                        else
                        {
                            j--;
                        }

                        diff--;
                    }
                    else
                    {
                        if (prev + diff <= n * n && val[prev + diff] != 1)
                        {
                            cout << prev + diff << " ";
                            val[prev + diff] = 1;
                            prev += diff;
                        }
                        else if (prev - diff > 0 && val[prev - diff] != 1)
                        {
                            cout << prev - diff << " ";
                            val[prev - diff] = 1;
                            prev -= diff;
                        }
                        else
                        {
                            j--;
                        }
                        diff--;
                    }
                }
            }
            else
            {
                for (int p = 1; p <= n * n; p++)
                {
                    if (val[p] == 0)
                        cout << p << " ";
                }
            }
            cout << "\n";
        }
    }
}