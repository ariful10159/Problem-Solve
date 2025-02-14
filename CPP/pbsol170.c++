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
        int a, count = 0, total = 0;
     
        cin >> a;
        vector<int> arr;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin >> b;
            arr.push_back(b);
        }
        sort(arr.begin(), arr.end());
        int k = arr[0];
        if (arr.size() > 1)
        {
            for (int i = 1; i < arr.size(); i++)
            {
                if (k < arr[i])
                {
                    count++;
                    k = arr[i];
                }
                else
                {
                    total++;
                }
            }
            if(total==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}