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
    cin>>t;
    while(t--)
    {
        int count=0;
        int a,b;
        cin>>a>>b;
        vector<int>arr;
        for(int i=0;i<a;i++)
        {
            int k;
            cin>>k;
            arr.push_back(k);
            if(arr[i]== b)
            {
               count++;
            }
        }
        /*for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }*/
        if(count>=1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}