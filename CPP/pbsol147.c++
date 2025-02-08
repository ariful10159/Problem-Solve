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

    int t, count = 0, total = 0, sum = 0, c = 0,d=0, odd = 0;
    cin >> t;
    vector<int> arr;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    if (t > 2)
    {
        for (int i = t - 1; i >= 0; i--)
        {
            if (sum == t || sum > (t))
            {
                break;
            }

            count = count + arr[i];
            sum++;
            c++;
               if (sum == t || sum > (t))
            {
                break;
            }
            // cout << "sum=" << sum << "c=" << c << endl; // sum=1 c=1

            for (int j = odd; j < t; j++)
            {
                d++;
                odd++;
                //cout << "total=" << total << "count=" << count << "j=" << j << endl;
                if (sum == t || sum > t)
                {
                    break;
                }

                if (total < count)
                {
                   // cout << "masum" << endl;
                    total = total + arr[j];
                    sum++;
                   // cout << "sum=" << sum << "c=" << c << endl;
                    if (sum == t || sum > t)
                    {
                        break;
                    }
                    total = total + arr[j + 1];
                   // cout << "total==" << total << "count==" << count << endl;
                    if (total >= count)
                    {
                        total = total - arr[j + 1];
                        break;
                    }
                    else
                    {
                        total = total - arr[j + 1];
                    }
                    //cout << "sum=" << sum << "c=dgf " << c << endl;
                }

                else
                {
                    sum++;

                    break;
                }
            }
        }
       // cout<<c<<"  "<<d<<endl;
        if(c==d && total==count)
        {
            cout<<c+1<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }

    else
    {
        if (t == 1)
        {
            cout << t << endl;
        }
        else
        {
            if(arr[0]==arr[1])
            {
                cout<<t<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
    }
}