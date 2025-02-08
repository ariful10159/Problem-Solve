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
    cin>>t;
    while(t--)
    {
        int a,count=0,k=0;
        cin>> a;
        for(int i=0;i<a;i++)
        {
            int b,c;
            cin>>b>>c;
            if(b<=10)
            {
                //cout<<"c="<<c<<" count="<<count<<endl;
                if(c>count)
                {
                    count=c;
                     k=i+1;
                     //cout<<"i="<<i<<endl;
                }

            }
        }
        cout<<k<<endl;
    }
}