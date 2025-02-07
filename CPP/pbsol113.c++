#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{
    
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        vector<int>v1={a,b,c};
        sort(v1.begin(),v1.end());
        cout<<v1[1]<<endl;

    }

}
