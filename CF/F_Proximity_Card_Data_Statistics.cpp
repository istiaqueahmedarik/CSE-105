#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int string_to_int(string s)
{
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}
int change_time(string s1, string s2)
{
    string yearS = s1.substr(5, 4);
    int year = string_to_int(yearS);
    string monthS = s1.substr(3, 2);
    int month = string_to_int(monthS);
    string dayS = s1.substr(0, 2);
    int day = string_to_int(dayS);
    string hourS = s1.substr(11, 2);
    int hour = string_to_int(hourS);
    string minuteS = s1.substr(14, 2);
    int minute = string_to_int(minuteS);
    string secondS = s1.substr(17, 2);
    int second = string_to_int(secondS);
    string yearSS = s2.substr(5, 4);
    int year1 = string_to_int(yearSS);
    string monthSS = s2.substr(3, 2);
    int month1 = string_to_int(monthSS);
    string daySS = s2.substr(0, 2);
    int day1 = string_to_int(daySS);
    string hourSS = s2.substr(11, 2);
    int hour1 = string_to_int(hourSS);
    string minuteSS = s2.substr(14, 2);
    int minute1 = string_to_int(minuteSS);
    string secondSS = s2.substr(17, 2);
    int second1 = string_to_int(secondSS);
    if (year1 > year)
    {
        return 1;
    }
    else if (year1 < year)
    {
        return 0;
    }
    else
    {
        if (month1 > month)
        {
            return 1;
        }
        else if (month1 < month)
        {
            return 0;
        }
        else
        {
            if (day1 > day)
            {
                return 1;
            }
            else if (day1 < day)
            {
                return 0;
            }
            else
            {
                if (hour1 > hour)
                {
                    return 1;
                }
                else if (hour1 < hour)
                {
                    return 0;
                }
                else
                {
                    if (minute1 > minute)
                    {
                        return 1;
                    }
                    else if (minute1 < minute)
                    {
                        return 0;
                    }
                    else
                    {
                        if (second1 > second)
                        {
                            return 1;
                        }
                        else if (second1 < second)
                        {
                            return 0;
                        }
                        else
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    map<string, vector<string>> m;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int i = 20;
        int j = 43;
        string sub = s.substr(i, j - i + 1);
        if (m[sub].size() == 0)
        {
            string dt = s.substr(0, 19);
            string birth = s.substr(45, 10);
            string gpa = s.substr(56, 4);
            m[sub].push_back(dt);
            m[sub].push_back(birth);
            m[sub].push_back(gpa);
        }
        else
        {
            string dt = s.substr(0, 19);
            string birth = s.substr(45, 10);
            string gpa = s.substr(56, 4);
            if (change_time(dt, m[sub][0]) == 0)
            {
                m[sub][0] = dt;
                m[sub][1] = birth;
                m[sub][2] = gpa;
            }
        }
    }
    map<string, int> m1;
    vector<int> v;
    for (auto i : m)
    {

        string subT = i.second[1].substr(6, 4);
        v.push_back(string_to_int(subT));
        m1[i.second[2]]++;
    }
    sort(v.begin(), v.end());
    string arr[8] = {"A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"};
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " " << m1[arr[i]] << endl;
    }
    map<int, int> m7;
    for (int k = 0; k < v.size(); k++)
    {
        m7[v[k]]++;
    }
    for (auto p : m7)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}