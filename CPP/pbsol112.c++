#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{

    int n,a,b,c,sum;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;

        }
        else{
            cout<<"-"<<endl;
        }
    }
    

}
