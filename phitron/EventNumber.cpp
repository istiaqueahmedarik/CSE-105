#include <bits/stdc++.h>
using namespace std;
vector<int> even_generator(vector<int> v)
{
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            ans.push_back(v[i]);
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> b = even_generator(v);
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
}