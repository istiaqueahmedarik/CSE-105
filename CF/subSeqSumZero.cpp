#include <bits/stdc++.h>
using namespace std;
bool SubSeqSumZero(vector<int> arr, int n, int sum)
{
    if (arr.size() == 0)
        return true;
    if (sum == 0)
        return true;
    if (arr[n - 1] > sum)
        return SubSeqSumZero(arr, n - 1, sum);
    return SubSeqSumZero(arr, n - 1, sum) || SubSeqSumZero(arr, n - 1, sum - arr[n - 1]);
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    } 
    int sum;
    cin >> sum;
    if (SubSeqSumZero(arr, n, sum))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}