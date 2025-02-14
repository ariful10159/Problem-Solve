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

    int a ,b,tc=0,tm=0,ty=0,tw=0,tg=0,tb=0;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='C')
            {
                tc++;
            }
             if(ch=='M')
            {
                tm++;
            }
             if(ch=='Y')
            {
                ty++;
            }
            if(ch=='W')
            {
                tw++;
            }
             if(ch=='G')
            {
                tg++;
            }
             if(ch=='B')
            {
                tb++;
            }
        }
    }
    if(tc!=0|| tm!=0 ||   ty!=0 )
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    
}