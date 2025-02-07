#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    optimize();

    int a;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        int n, b = 0, c, d;
        cin >> n;
        c = n;
        // cout << n << endl;
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                b = n - i + 1;
                cout << b << " ";
            }
        }
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                c = n - i;
                if (c != (i + 1))
                {
                    cout << c << " ";
                }
                else
                {
                    d = i + 1;
                    c = c - 1;
                    cout << c << " ";
                    i++;
                }
            }
            cout << d << " ";
        }
        cout << endl;
    }
}