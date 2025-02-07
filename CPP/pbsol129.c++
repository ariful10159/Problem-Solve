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
        int a,b,c,sum=0,total=0;
        cin>>a>>b>>c;
        int k=abs(b-c);
        //cout<<"k="<<k<<endl;
        int l=abs(1-c);
        sum=k+l;
        //cout<<"sum="<<sum<<endl;
        if(a==1)
        {
            cout<<"1"<<endl;

        }
        else
        {
            total=abs(a-1);
            //cout<<"total"<<total<<endl;
            if(total==sum )
            {
                cout<<"3"<<endl;
            }
            else if(total>sum)
            {
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        
    }
}