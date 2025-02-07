/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t, a, b;
    int sum;
    long total;
    cin >> t;
    while (t--)
    {
        sum = 0;
        total = 0;
        cin >> a >> b;
        if (a < b)
        {
            int k = a + a;
            int l = b + b;

            if (k <= b)
            {
                sum = (b * b);
            }
            if (k > b)
            {
                sum = k * k;
            }

            //cout << "sum=" << sum << endl;
        }
        else
        {
            int m = a + a;
            int n = b + b;
            if (n <= a)
            {
                sum = a * a;
            }
            if (n > a)
            {
                sum = n * n;
            }
           // cout << "sum=" << sum << endl;
        }
        for (int i = 1; i < 201; i++)
        {
            total = i * i;

            if (sum == total || sum < total)
            {
                cout << total << endl;
                break;
            }
        }
    }
}*/
/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
        {
            a = a * 2;
        }
        else
        {
            b = b * 2;
        }
        int m = max(a, b) * max(a, b);
        cout << m <<endl;
    }
}*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello World";
  cout << "Initially: " << str << endl;

  str.erase(str.begin() + 2, str.begin() + 5);
  cout << "After using erase(str.begin() + 2, str.begin() + 5) " << str;
  return 0;
}