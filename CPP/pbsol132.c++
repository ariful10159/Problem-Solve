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
        int k, a=0, b=0, sum=0;
        cin >> k;
        string s;
        cin >> s;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'B')
            {
                a = i;
                break;
            }
        }
        for (int j = k; j >= 0; j--)
        {
            if (s[j] == 'B')
            {
                b = j+1;
                break;
            }
        }
        //cout << "a=" << a << " "
        //     << "b=" << b << endl;
        sum = b - a;
        cout <<sum<< endl;
    }
}