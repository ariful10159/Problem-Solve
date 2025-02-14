#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//........,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...............

void solve(int k)
{
    for(int i=0;i<k;i++)
    {
        int a,b,c,count=0;
        cin>>a>>b>>c;
        if(a<b && b<c)
        {
            cout<<"STAIR"<<endl;
            count++;
        }
        if(a<b && b>c)
        {
            cout<<"PEAK"<<endl;
            count++;
        }
        if(count==0)
        {
            cout<<"NONE"<<endl;
        }

    }

}
//.........................................................
int main()
{
    optimize();

    int n;
    cin>>n;
    solve(n);

}