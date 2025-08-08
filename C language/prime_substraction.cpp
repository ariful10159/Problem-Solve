#include<bits/stdc++.h>
using namespace std;
bool isprime(long long x)
{
    if(x<2)
    return false;
    if(x==2)
    return true;
    if(x%2==0)
    return false;
    for(int i=3;i<=sqrt(x)+1;i+=2)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        if(isprime(x))
        cout<<"prime";
        else
        cout<<"not prime";
    }
    return 0;
}