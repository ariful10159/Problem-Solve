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

    string s="codeforces";
    int t;
    cin>>t;
    while (t--)
    {
        int count =0;
        string st;
        cin>>st;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=st[i])
            {
                 count++;
            }
        }
        cout<<count <<endl;
    }

}