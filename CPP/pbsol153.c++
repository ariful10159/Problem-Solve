#include <bits/stdc++.h>
#include <iostream>
#include<string>
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
        string s1;
        for(int i=0;i<8;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<8;j++)
            {
                if(s[j]=='.')
                {
                    continue;
                }
                else{
                    s1 = s1+s[j];
                }
            }

        }
        cout<<s1<<endl;
        s1.clear();
       
    }

}

