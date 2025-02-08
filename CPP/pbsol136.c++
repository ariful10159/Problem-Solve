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
        int k;
        cin >> k;
        int count = 0;

        vector<int> arr;

        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        // for(int i=0,j=0;i<arr.size();j++)
        int l = arr.size();
        for (int i = 0; i <= l ; i++)
        {
            // cout<<"sdf ";
            int v = arr.size();
            cout << arr[i] << " ";
             if (count == k)
            {
                break;
            }
            count++;

            if (count == k)
            {
                break;
            }
            cout << arr[l - i - 1] << " ";
            count++;
            if (count == k)
            {
                break;
            }
        }
        cout << endl;
    }
}