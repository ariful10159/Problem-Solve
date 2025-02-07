#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    int a, b, count, total = 0;
    cin >> a >> b;

    for (int i = a + 1; i <= b; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            // count = 0;
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 || i == b)
        {
            if (i == b && count == 0)
            {
                cout << "YES" << endl;
                total++;
            }
            else
            {
                cout << "NO" << endl;
                total++;
            }
        }
        if (total > 0)
            break;
    }
}
