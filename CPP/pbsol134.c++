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
    cin >> t;
    while (t--)
    {
        int sum = 0,n=0,o=0;
        for (int i = 0; i < 4; i++)
        {
            int a, b;
            cin >> a >> b;
            if (i == 0)
            {
                sum = a;
                o=b;

            }
            if(i!=0 && sum==a)
            {
                n=b;
            }
        }
        //cout<<"a="<<o<<"n="<<n<<endl;
        int total=abs(o-n);
        cout<<total*total<<endl;
    }
}