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
        int count = 0;
        int m, n, k;
        cin >> m >> n >> k;
        vector<int> arr1;
        vector<int> arr2;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            if (a < k)
            {
                arr1.push_back(a);
            }
        }
        for (int j = 0; j < n; j++)
        {
            int b;
            cin >> b;
            if (b < k)
            {
                arr2.push_back(b);
            }
        }
        //int c = arr1.size();
        //int d = arr2.size();
       // cout << "c=" << c << " "
        //     << "d=" << d << endl;

        for (int i = 0; i < arr1.size(); i++)
        {
            for (int j = 0; j < arr2.size(); j++)
            {
                if (arr1[i] + arr2[j] <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}