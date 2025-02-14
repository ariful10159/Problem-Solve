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
        int a,sum,count=0;
        cin>>a;
        vector<int >arr;
        for(int i=0;i<a;i++)
        {
            int s;
            cin>>s;
            arr.push_back(s);
        }
        sort(arr.begin(),arr.end());
        int k=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            sum=arr[i]-k;
            count = count + sum;
        }
        cout<<count<<endl;

    }
}