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
    cin>>t;
    while(t--)
    {
        int counta=0,countb=0;

        string s;
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
            {
                counta++;
            }
            else
            {
                countb++;
            }

        }
        if(counta>countb)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }

    }

}