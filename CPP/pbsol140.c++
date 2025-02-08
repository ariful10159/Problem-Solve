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

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,count=0,total=0;
        cin>>a>>b;
        string s1;
        string s2;
        cin>>s1>>s2;
        for(int i=0;i<a;i++)
        {
            for(int j=total;j<b;j++)
            {
                total++;
                if(s1[i]==s2[j])
                {
                    count++;
                   
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}