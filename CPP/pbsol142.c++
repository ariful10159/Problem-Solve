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
        int a, count = 0, total = 0, sum = 0;
        cin >> a;
        vector<int> arr;
        for (int i = 0; i < a; i++)
        {
            int l;
            cin >> l;
            arr.push_back(l);
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
            if (arr[i] == 1 || i==(a-1))
            {

                if (sum <= count)
                {
                    sum = count;
                }
                count = 0;
            }
        }
        if (sum > 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}
