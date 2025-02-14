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
    int a=97,count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int k= int(s[i]);
        //cout<<"k="<<k<<endl;
        int b=abs(k-a);
        if(b<=13)
        {
            count=count + b;
            a=k;

        }
        else
        {
             count = count + abs(26-b);
             a=k;
        }
        
    }
    cout<<count<<endl;

}