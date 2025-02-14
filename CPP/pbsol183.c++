#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include  <math.h>
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
        long int a, b, c, n;
        cin >> a >> b >> c >> n;
        long int nummax = max(max(a, b), c);
       // cout << "nummax=" << nummax << endl;
        long int div = (nummax - a) + (nummax - b) + (nummax - c);
        //cout << "div==" << div << endl;
        long int sum = n - div;
       // cout << "sum=" << sum << endl;
        if (sum < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sum % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}