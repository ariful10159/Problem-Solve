#include <bits/stdc++.h>
#include <iostream>
#include<string>
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
        int a,b;
        cin>>a>>b;
        if(a<=b)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            swap(a,b);
            cout<<a<<" "<<b<<endl;
        }
    }

}