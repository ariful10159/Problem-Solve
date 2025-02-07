#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int t;
  string s, p,q;
  cin >> t;
  while (t--)
  {
    cin >> s;
    int m = s.length();

    //cout << "m=" << m << endl;
    if (m % 2 == 0)
    {
      int k = m / 2;
      //cout<<"k="<<k<<endl;
     
      for (int i = 0; i < k; i++)
      {
        p = p + s[i];
        
      }
      //cout<<"p="<<p<<endl;
      s.erase(s.begin(),s.begin()+k);
      //cout<<"s="<<s<<endl;
      if(s==p)
      {
        cout<<"YES"<<endl;
      }
      else
      {
         cout << "NO" << endl;
      }
      p.clear();

    }
    else
    {
      cout << "NO" << endl;
    }
  }
}