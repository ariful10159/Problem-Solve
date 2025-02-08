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
     int count=0;
    string s;
    cin>>s;
   sort(s.begin(),s.end());
  // cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
   // cout<<count<<endl;
    if(count%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }


}