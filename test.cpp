#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t; // read the number of test cases

    while (t--)
    { // for each test case
        int n, k;
        cin >> n >> k;

        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int out_of_place = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] != i + 1)
            {
                out_of_place++;
            }
        }

        // ceil(out_of_place / k) is the minimum number of operations needed
        cout << ceil(out_of_place / (double)k) << endl;
    }

    return 0;
}