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
        int n,total=1,count=0,sum=0;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                 total++;
            }
           
        }
        count = n-total;

        sum= count+total*2;
        cout<<sum<<endl;

    }

}