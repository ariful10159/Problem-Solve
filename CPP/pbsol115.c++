/*#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{
  int n, count = 1, total = 0;
  cin >> n;
  string s1, s2, s3;
  cin >> s1;
  if (n > 1)
  {
    for (int i = 0; i < n - 1; i++)
    {
      cin >> s2;

      if (s1 == s2)
      {
        count++;
      }
      else
      {
        total++;
        s3 = s2;
      }
    }
    // cout<<count<<endl;
    // cout<<total<<endl;

    if (count > total)
    {
      cout << s1 << endl;
    }
    else
    {
      cout << s3 << endl;
    }
  }
  else
  {
    cout << s1 << endl;
  }
}*/

#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
int main()
{
  int t;
  cin >> t;
  int a[1000],n;
  while (t--)
  {
    int odd=0,even=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];

      if (i % 2 != a[i] % 2)
      {
        if (a[i] % 2)
        {
          odd++;
        }
        else
          even++;
      }
    }
    if (odd != even)
    {
      cout << "-1" << endl;
    }
    else
    {
      cout << odd << endl;
    }
  }
}
