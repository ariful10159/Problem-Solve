#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
  int n,t,count=0;
  cin>>n>>t;
  int a[n];
  for(int i=1;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=1;i<=t;i=i+a[i])
  {
     if(i==t)
     {
        count++;
     }
  }
  if(count!=0)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

}
