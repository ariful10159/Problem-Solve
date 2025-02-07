#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{
   int n,sum;
   string s,k;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>s;
    int a=s.size();
    //cout<<"size="<<a<<endl;
    k=s[0];
    int b=stoi(k);
    //cout<<"first ="<<b<<endl;
    sum = 10 * (b-1);
    for(int i=1;i<=a;i++)
    {
       sum=sum+i;
    }
    cout<<sum<<endl;
   }
}
