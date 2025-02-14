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
        char ch;
        int toa=0,tob=0,toc=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>ch;
                if(ch=='A')
                {
                    toa++;
                }
                if(ch=='B')
                {
                    tob++;
                }
                if(ch=='C')
                {
                    toc++;
                }
            }
        }
        if(toa==2)
        {
            cout<<"A"<<endl;
        }
        if(tob==2)
        {
            cout<<"B"<<endl;
        }
        if(toc==2)
        {
            cout<<"C"<<endl;
        }
    }
}