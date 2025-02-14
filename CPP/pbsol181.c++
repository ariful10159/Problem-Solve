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
        int n,total=0;
        cin>>n;
        string s;
        string s1="abcdefghijklmnopqrstuvwxyz";
        cin>>s;
        sort(s.begin(), s.end());

        char ch=s[n-1];
       // cout<<ch<<endl;
        for(int i=0;i<=26;i++)
        {
            if(s1[i]==ch)
            {
                total=i+1;

                break;
            }

        }
        
        cout<<total<<endl;
    }
}