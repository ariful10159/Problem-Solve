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
        int k, m = 0;
        cin >> k;
        string s;
        cin >> s;
        for (int i = 0; i < k/2; i++)
        {
            int c = k - (1 + i);
            //cout << "c=" << c << endl;
           //cout << s[i] << "  " << s[c] << endl;
            if (s[i] == '1' && s[c]=='0' || s[i] == '0' && s[c]=='1')
            {
              //  cout << "dfdfd" << endl;
                m = i + 1;
                //cout << "m=" << m << endl;
            }
            else
            {

                break;
            }
        }
        cout << k - m * 2 << endl;
    }
}