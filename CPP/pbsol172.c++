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
        int a, b;
        cin >> a >> b;

        if (a < b)
        {
            cout << "NO" << endl;
            continue;
        }
        if (a % 2 != 0 && b % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (a % b == 0)
        {
            int k = a / b;
            cout << "YES" << endl;
            for (int i = 0; i < b; i++)
            {
                cout << k << " ";
            }
            cout << endl;
            continue;
        }
        if (a % 2 == 0 && b % 2 != 0)
        {
            int sum = a / b;
            if (sum % 2 != 0)
            {
                if(sum>1)
                {
                    sum=sum-1;
                }
                else
                {
                    sum=sum+ 1;
                }
               
            }
            int total = sum * (b - 1);
            int s = abs(a - total);
            if ((total + s) == a && s>0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < (b - 1); i++)
                {
                    cout << sum << " ";
                }
                cout << s << " ";
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        if (a % 2 == 0 && b % 2 == 0)
        {
            int total = a / b;
            //cout << "total=" << total << endl;
            int mud = a % b;
            //cout << "mud=" << mud << endl;
            int s = total + mud;
            if (total % 2 == 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < (b - 1); i++)
                {
                    cout << total << " ";
                }
                cout << s << endl;
            }
            else
            {
                if (total > 1)
                {
                    total = total - 1;
                }
                int k = total * (b - 1);
                int l = a - k;
                cout << "YES" << endl;
                for (int i = 0; i < (b - 1); i++)
                {
                    cout << total << " ";
                }
                cout << (l) << endl;
            }
            continue;
        }
        if (a % 2 != 0 && b % 2 != 0)
        {
            int div = a / b;
            int total = div - 1;
            int mud = a % b;
            int sum = total * (b - 1);
            int oth = a - sum;
            
            if (div % 2 != 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < (b - 1); i++)
                {
                    cout << div << " ";
                }
                cout << div + mud << endl;
            }
            else
            {
                div = div - 1;
                cout << "YES" << endl;

                for (int i = 0; i < (b - 1); i++)
                {
                    cout << total << " ";
                }
                cout << oth << endl;
            }
            continue;
        }
    }
}