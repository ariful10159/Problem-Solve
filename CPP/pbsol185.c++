#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    int a, b;
    string s, s1, s2;
    cin >> s;
    int k = s.size();
    int x = k - 1;
    int y = k - 2;
    if (s[0] != '-')
    {
        cout << s << endl;
    }
    else
    {
        s1 = s[x];
        s2 = s[y];
        // cout << s1 << " " << s2 << endl;
        if (stoi(s1) > stoi(s2))
        {
            s.erase(s.begin() + x);
            if (s.size() == 2)
            {
                if (s[1] == '0')
                {
                    cout << s[1] << endl;
                }
                else
                {
                    cout << s << endl;
                }
            }
            else
            {
                cout << s << endl;
            }
        }
        else
        {
            s.erase(s.begin() + y);
             if (s.size() == 2)
            {
                if (s[1] == '0')
                {
                    cout << s[1] << endl;
                }
                else
                {
                    cout << s << endl;
                }
            }
            else
            {
                cout << s << endl;
            }
            
        }
    }
}