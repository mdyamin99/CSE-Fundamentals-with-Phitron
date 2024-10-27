#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    string s;
    cin >> s;
    int n = s.size(), count = 0;
    map<char, int> m;
    char cnt;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int oc = 0;
    for (auto c : m)
    {
        if (c.second % 2)
        {
            cnt = c.first;
            c.second--;
            oc++;
        }
    }
    if (oc > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    if (m.size() == 1)
    {
        cout << s << endl;
        return;
    }
    string cp;
    for (auto c : m)
    {
        int x = c.second;
        for (int i = 0; i < x / 2; i++)
        {
            cout << c.first;
            cp += c.first;
            count++;
            if (count == n / 2)
                break;
        }
    }
    if (oc != 0)
        cout << cnt;
    reverse(cp.begin(), cp.end());
    cout << cp << endl;
}