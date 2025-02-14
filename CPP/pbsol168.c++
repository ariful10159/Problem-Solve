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
    int a, b, count = 0, total = 0, sum, mod;
    cin >> a >> b;
    count = count + a;
    int temp = b;
    int temp1 = a;
    for (int i = 0; i < temp1; i++)
    {
        //cout<<"i="<<i<<endl;
        sum = a / b;
        mod = a % b;
        //cout << "mod=   " << mod << endl;
        //cout << "sum=   " << sum << endl;
        count = count + sum;
        a = sum + mod;
        //cout<<"a= "<<a<<endl;
        if (a < b)
        {
            //cout<<"break"<<endl;
            break;
        }
    }
    cout << count << endl;
}