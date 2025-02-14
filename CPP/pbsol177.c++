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
    cin >> t;
    while (t--)
    {
        int n, total = 0, count = 0, sum = 0,div=0;
        cin >> n;
        if(n>=2020)
        {
            for (int i = 2020; i <= n; i = i + 2020)
            {
                total++;
                sum=sum+2020;
            }
            if(sum==n)
            {
                cout<<"YES"<<endl;
            }
            else
            { 
                div= n-sum;
                if(div<=total)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}