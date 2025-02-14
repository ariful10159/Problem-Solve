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
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        if(a<b )
        {
            if(c>a && c<b || c<a && c>b)
            { 
                count++;
            }
            if (d>a && d<b || d<a && d>b)
            {
                count++;
            }
            //cout<<"count="<<count<<endl;
            if(count==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{

            if(c<a && c>b || c>a && c<b)
            { 
                count++;
            }
            if (d<a && d>b || d>a && d<b)
            {
                count++;
            }
           // cout<<"count="<<count<<endl;
            if(count==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
   
    }
}