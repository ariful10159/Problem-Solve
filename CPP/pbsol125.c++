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
    string s;
    while(t--)
    {
      cin>>s;
      if(s=="bca" || s=="cab" )
      {
         cout<<"NO"<<endl;
      }
      else 
      {
        cout<<"Yes"<<endl;
      }
    }
}