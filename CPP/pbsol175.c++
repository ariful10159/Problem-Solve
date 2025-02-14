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
        int n, a, b, sum = 0;
        cin >> n >> a >> b;
        int total = n * a;
        if (n % 2 != 0)
        {
            sum = (((n - 1) / 2) * b) + a;
        }
        else
        {
            sum = (n / 2) * b;
        }
        if (sum < total)
        {
            cout << sum << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
}