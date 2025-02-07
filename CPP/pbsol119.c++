#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    string s, s1;
    int t, n, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        s1 = s1 + s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                continue;
            }
            else
            {
                s1 = s1 + s[i];
            }
        }

        int k = s1.size();

        sort(s1.begin(), s1.end());

        for (int i = 1; i < s1.size(); i++)
        {
            if (s1[i] == s1[i - 1])
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        s1.clear();
        count = 0;
    }
}