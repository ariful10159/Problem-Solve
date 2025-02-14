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
    cin>> t;
    while(t--)
    {
        int k,count=0;
        string s1,s2;
        cin>>k;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<k;i++)
        {
            if(s1[i]==s2[i])
            {
                count++;

            }
            else if( s1[i]=='B' && s2[i]=='G' ||  s1[i]=='G' && s2[i]=='B')
            {
                count++;
            }
        }
        if (count == k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }


}