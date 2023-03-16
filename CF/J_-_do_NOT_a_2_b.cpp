#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int visited[1000000];
map<int, int> mp;
int visitedPlace = 0;
void checking(int n)
{
    if (visited[n] == 0)
        visitedPlace++;
    if (mp[n] == 1)
    {
        visited[n] = 1;
        if (mp[n * 2] == 0)
            return;
        else
            checking(n * 2);
    }
    else
    {
        mp[n]--;
        checking(n);
    }
}
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr, arr + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[arr[i]] == 0)
        {
            checking(arr[i]);
            c += visitedPlace / 2;
            visitedPlace = 0;
        }
    }
    cout << c << endl;
    return 0;
}