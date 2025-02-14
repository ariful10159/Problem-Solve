/*#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define optimize()
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//........,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...............

void solve(int k)
{
    int count = 0;
    if (k > 9)
    {
        count = count + 9;
    }

    else
    {
        count = count + k;
    }
    int i = 11, total = 0;
    string s = "11", s1 = "2";
    while (i <= k)
    {
        count++;
        total++;
        // cout << "total==" << total << endl;
        if (total == 9)
        {
            s1 = '1' + s1;
            int sum1 = stoi(s1);
            i = i + sum1;
            // cout<<"i=="<<i<<endl;
            continue;
        }
        if (total == 10)
        {

            s = s + '1';
            // cout << "s=" << s << endl;
            total = 1;
        }
        int sum = stoi(s);
        i = i + sum;
        cout << "i=" << i << "    sum=" << sum << endl;
        cout << "/////////count==" << count << endl;
    }
    cout << count << endl;
}

//.........................................................
int main()
{
    optimize();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        solve(a);
    }
}*/
#include <bits/stdc++.h>
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl '\n';
using namespace std; 
int main()
{
    long long t,q=10,a,w,e,r,y,x;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        if(s.length()>1)
        {
        int l=s.length();
        for(int j=1; j<=l-2; j++)
        {
            q=q*10;
        }
         a= stoi(s);
         w=a/q;
         x=w;
         e=a%q;
         string s2= to_string(w);
         string s3=s2;
         for(int j=1; j<l-1; j++)
         {
           s2.append(s3); 
         }
         r=stoi(s2);
         y=9*(l-1);
         if(e>=r)
         {
            y=x+y;
            cout<<y<<'\n';
            y=0;
         }
         else
         {
         y=(x-1)+y;
          cout<<y<<'\n';
          y=0;
         }
        }
        else
        cout<<s<<'\n';



    }
    
}