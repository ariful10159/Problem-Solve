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
    string s1,s2,s3;
    int a,b,c,sum;
    cin>>s1>>s2>>s3;
    a=s1.size();
    b=s2.size();
    c=s3.size();
    if(a+b!=c)
    {
        cout<<"NO"<<endl;

    }
    else
    {
        s1=s1+s2;
        //cout<<s1<<endl;
        sort(s1.begin(),s1.end());
        sort(s3.begin(),s3.end());
        //cout<<s1<<endl;
        //cout<<s3<<endl;
        if(s1==s3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


}