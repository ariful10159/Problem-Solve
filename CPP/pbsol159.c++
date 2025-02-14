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
        int a,even=0,odd=0;
        cin>>a;
        vector<int> arr;
        for(int i=0;i<2*a;i++)
        {
            int b;
            cin>>b;
            arr.push_back(b);
            if(b%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==even)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
     }
}
