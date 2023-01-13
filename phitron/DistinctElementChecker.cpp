#include <bits/stdc++.h>
using namespace std;
vector<int> Merge(vector<int> v);
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    vector<int> v1(k);
    for (int i = 0; i < k; i++)
        cin >> v1[i];
    v = Merge(v);
    v1 = Merge(v1);
    int left = 0, right = 0;
    while (left < v.size() && right < v1.size())
    {
        if (v[left] < v1[right])
            cout << "NO\n";
        if (v[left] == v1[right])
        {
            left++;
        }
        else
        {
            right++;
        }
    }
    if (left == v.size())
        cout << "YES\n";
    else
        cout << "NO\n";
}

vector<int> Merge(vector<int> v)
{
    if (v.size() <= 1)
        return v;
    int mid = v.size() / 2;
    vector<int> left, right;
    for (int i = 0; i < mid; i++)
    {
        left.push_back(v[i]);
    }
    for (int i = mid; i < v.size(); i++)
    {
        right.push_back(v[i]);
    }
    vector<int> sortedLeft = Merge(left);
    vector<int> sortedRight = Merge(right);
    vector<int> final;
    int leftIndex = 0, rightIndex = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (leftIndex == sortedLeft.size())
        {
            final.push_back(sortedRight[rightIndex]);
            rightIndex++;
        }
        else if (rightIndex == sortedRight.size())
        {
            final.push_back(sortedLeft[leftIndex]);
            leftIndex++;
        }
        else if (sortedLeft[leftIndex] < sortedRight[rightIndex])
        {
            final.push_back(sortedLeft[leftIndex]);
            leftIndex++;
        }
        else
        {
            final.push_back(sortedRight[rightIndex]);
            rightIndex++;
        }
    }
    return final;
}