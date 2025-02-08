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

    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ( s[i] == 'Q' )
        {
            cout << "YES" << endl;
            count++;
            break;
        }
         if ( s[i] == 'H' )
        {
            cout << "YES" << endl;
            count++;
            break;
        }
         if ( s[i] == '9' )
        {
            cout << "YES" << endl;
            count++;
            break;
        }
        
    }
    if (count == 0)
    {
        cout << "NO" << endl;
    }
}