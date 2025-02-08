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
        int a, b;
        cin >> a >> b;
        int subs = abs(a - b);
        if (a > b)
        {
            if (a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else if(a<b)
        {
            if(a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}