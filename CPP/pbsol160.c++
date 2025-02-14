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

    string s="qwertyuiopasdfghjkl;zxcvbnm,./";

    char a;
    cin>>a;
    if(a=='R')
    {
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s1[i]==s[j])
                {
                    cout<<s[j-1];
                }
            }
        }
    }
    else
    {
        string s2;
        cin>>s2;
        for(int i=0;i<s2.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s2[i]==s[j])
                {
                    cout<<s[j+1];
                }
            }
        }

    }

}