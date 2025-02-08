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
   int a,b;
   cin>>a>>b;
   string s;
   cin>>s;
   for(int i=0;i<b;i++)
   {
    for(int j=0;j<s.size();j++)
    {
        if(s[j]=='B' && s[j+1]=='G')
        {
            swap(s[j],s[j+1]);
            j++;
        }
    }
   }
   cout<<s<<endl;
}