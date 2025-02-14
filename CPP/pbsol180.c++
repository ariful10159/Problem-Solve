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
    int t, sum = 3, total = 1, count = 0;
    cin >> t;

    while(t--)
    {
        int total =0,sum=0;
        int a,b;
        cin>>a>>b;
        total = a* 60 +b;
        sum=1440-total;
        cout<<sum<<endl;

    }

    
}