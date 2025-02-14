
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
        int a;
        long long count=1;
        cin >> a;
        vector<int> arr;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin>>b;
            arr.push_back(b);

        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(i==0)
            { 
                count = count * (arr[i]+1);

            }
            else
            {
                count = count * arr[i];
            }
        }

        cout<<count<<endl;
    }
    
}