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

    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            arr.push_back(m);
            if (m % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (n % 2 == 0)
        {
            if (odd == 0 || even == 0)
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (odd == 0 && even == n)
            {
                cout << "NO" << endl;
            }
        }
        if (odd >= 1 && even >= 1)
        {
            cout << "YES" << endl;
        }
        if (even == 0 && odd % 2 != 0)
        {
            cout << "YES" << endl;
        }
    }
}