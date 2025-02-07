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
    int n;
    int a[3];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] + a[1] >= 10 || a[0] + a[2] >= 10 || a[1] + a[2] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}