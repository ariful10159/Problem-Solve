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

    long long int t,count=0,l=0,sum=0,total=0;
    cin>>t;
    vector<long long >arr;
    for(long long i=0;i<t;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }

    for(long long j=0;j<t;j++)
    {
        if(l<arr[j])
        { 

            count++;
            
            l=arr[j];
           //cout<<"count="<<count<<"l="<<l<<endl;

        }
        else
        {
            l=arr[j];
           if(sum<=count)
           {
            sum=count;
            
           }
           count=1;
           //cout<<"sum="<<sum<<endl;

           
           
        }
    }
    if(sum<=count)
    {
        sum=count;
    }
    cout<<sum<<endl;


}