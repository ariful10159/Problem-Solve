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

    int a, b, c, d, sum, sun, k, count = 0, total = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    d = a + b + c;
    k = a * b * c;
    if (a > c)
    {
        sum = (c + b) * a;
        count++;
    }
    else
    {
        sun = (a + b) * c;
        total++;
    }
    if (count == 1)
    {
        if (sum > k)
        {
            if (sum > d)
            {
                cout << sum << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
        else
        {
            if (k > d)
            {
                cout << k << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
    }
    if(total==1)
    {
        if (sun > k)
        {
            if (sun > d)
            {
                cout << sun << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
        else
        {
            if (k > d)
            {
                cout << k << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
    }
}