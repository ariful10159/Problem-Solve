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

    int y,w,d,count;

    cin>>y>>w;

    d=max(y,w);
    //cout<<d<<endl;
    count = 6 - --d;
    //cout<<count<<endl;
    if(count==6)
    {
        cout<<"1/1"<<endl;
    }
    if(count==5)
    {
        cout<<"5/6"<<endl;
    }
    if(count==4)
    {
        cout<<"2/3"<<endl;
    }
    if(count==3)
    {
        cout<<"1/2"<<endl;
    }
    if(count==2)
    {
        cout<<"1/3"<<endl;
    }
    if(count==1)
    {
        cout<<"1/6"<<endl;
    }
    

}
