#include <bits/stdc++
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{
    long int x,y,n,t,k,res;
    int rem,final1,final2,a,b;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>n;

            if(n%x==y)
            {
                cout<<n<<endl;
                
            }

            else
            {
                res=n/x;
               // cout<<"result="<<res<<endl;
                rem = n%x;
               // cout<<"rem="<<rem<<endl;
                if(rem>y)
                {
                    a=rem-y;
                     final2=n-a;
                     cout<<final2<<endl;
                }
                else{
                    b=x-y;
                   final1 = n-rem-b;
                   cout<<final1<<endl;
                }
                

            }
        
        
    }



}