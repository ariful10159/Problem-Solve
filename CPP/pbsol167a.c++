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
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int a, sum = 0, total = 0, count = 0;
        cin >> a;
        if (a > 100000)
        {
            sum = a % 100;
            if (sum % 2 == 0)
            {
                a = a / 2;
                cout << a << endl;
            }
            else
            {
                a = a / 2 + 1;
                cout << a << endl;
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                a = a / 2;
                cout << a << endl;
            }
            else
            {
                a = a / 2 + 1;
                cout << a << endl;
            }
        }
    }
}