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
        int n;
        cin>>n;
        vector<int > arr;
        for(int i=0 ;i<n;i++)
        {
            int k;
            cin>>k;
            arr.push_back(k);

        }
        sort(arr.begin(), arr.end());
        int min=arr[1]-arr[0];

        for(int i=2;i<n;i++)
        {
            int mini = arr[i]-arr[i-1];
            if(min>=mini )
            {
                min=mini;

            }

        }
        cout<<min<<endl;
    }
}