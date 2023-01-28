#include <bits/stdc++.h>
using namespace std;
vector<int> Merge(vector<int> arr)
{
    if (arr.size() == 1)
        return arr;
    int mid = arr.size() / 2;
    vector<int> left, right;
    for (int i = 0; i < mid; i++)
        left.push_back(arr[i]);
    for (int i = mid; i < arr.size(); i++)
        right.push_back(arr[i]);
    vector<int> sorted_left = Merge(left);
    vector<int> sorted_right = Merge(right);
    vector<int> sorted;
    int l = 0, r = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (l == sorted_left.size())
        {

            sorted.push_back(sorted_right[r]);
            r++;
        }
        else if (r == sorted_right.size())
        {

            sorted.push_back(sorted_right[l]);
            l++;
        }
        else if (sorted_left[l] < sorted_right[r])
        {

            sorted.push_back(sorted_right[l]);
            l++;
        }
        else
        {
            sorted.push_back(sorted_right[r]);
            r++;
        }
    }
    return sorted;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = Merge(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}