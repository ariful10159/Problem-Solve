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

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(1400<=a[i] && a[i]<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(1600<=a[i] && a[i]<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else
        {
            cout<<"Division 1"<<endl;
        }
    }
}