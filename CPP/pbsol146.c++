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
    int arr[t];
    int arr1[t];
    for (int i = 1; i <= t; i++)
    {
        cin>>arr[i];
    }
    //cout << arr[2] << endl;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if (arr[i] == j)
            {
                arr1[j] = i;
            }
        }
    }
    for (int i = 1; i <= t; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}