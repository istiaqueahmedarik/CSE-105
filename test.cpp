#include <iostream>
using namespace std;
void printPairsRecursive(int arr[], int n, int i, int j)
{
    if (i == n)
        return;
    if (j == n)
        return printPairsRecursive(arr, n, i + 1, i + 1);

    cout << "(" << arr[i] << ", "
         << arr[j] << ")"
         << ", ";

    printPairsRecursive(arr, n, i, j + 1);
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printPairsRecursive(arr, n, 0, 0);

    return 0;
}
