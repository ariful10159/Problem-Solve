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
        int a,b,count=0;
        cin>>a>>b;
        float total =0;
        int sum=0;
        total=ceil(((float)b/2));
        count = count + total;
        if(b%2!=0)
        {
            sum = (total-1)*7+(15-4);
        }
        else
        {
            sum=total*7;
        }
        if(a<sum)
        {
            count = count+0;
        }
        else{
            a=a-sum;
           float g = ceil((float)a/15);
           count = count + g;
        }
        cout<<count<<endl;

        
         
        

    }
}