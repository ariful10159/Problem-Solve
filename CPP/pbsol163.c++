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
        string s;
        cin>>s;
        int a = int(s[0])-48;
        int b = int(s[2])-48;
         // cout<<a<<" "<<b<<endl;
        int result=a+b;
        cout<<result<<endl;


    }
}