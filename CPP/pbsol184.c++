/*#include <bits/stdc++.h>
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
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(b==c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
}*/
/*
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

    int n;
    cin >> n;
    while (n--)
    {
        int k=0,l=0;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        //cout<<"s="<<s<<endl;
         k = s.size();
        // cout<<"k="<<k<<endl;
        if (k % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
             l = k / 2;
             //cout<<"l="<<l<<endl;
             //cout<<s[l]<<" "<<s[l+1]<<endl;
            if (s[l-1] != s[l ])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}*/

/*#include <bits/stdc++.h>
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
    int n,x,sum=0,a=0;
    cin>>n>>x;
    vector<int >arr1,arr2;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        arr1.push_back(l);
    }
    int k;
    cin>>k;

    for(int i=0;i<k;i++)
    {
        int m;
        cin>>m;
        arr2.push_back(m);
        sum=sum+arr1[m-1];
        //cout<<"sum=="<<sum<<endl;

    }
    //cout<<"sum="<<sum<<endl;
     a =(x - sum)+1;
    cout<<a<<endl;

}*/

/*#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int total = 1;
        int sum = 0;
        for (int i = 1; i < a; i++)
        {
            while (arr[i] - arr[sum] > 1)
            {
                sum++;
            }
            total = max(total, i - sum + 1);
        }

        cout << total << endl;
    }

    return 0;
}
*/
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

    int n;
    cin >> n;
    while (n--)
    {
        int count = 0,a;

        string s, s1;
        s1 = "Timur";
        cin>>a;
        cin >> s;

        if (s1.size() == s.size())
        {

            /*for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout<<"i= j="<<i<<" "<<j<<endl;
                    if (s1[i] == s[j])
                    {
                        
                        count++;

                        cout<<"count=="<<count<<endl;
                        break;
                    }
                    
                }
            }
            cout<<"count=="<<count<<endl;
            if(count == 5)
            {
                cout<<"YEs"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }*/


           sort(s1.begin(),s1.end());
           sort(s.begin(),s.end());
           if(s==s1)
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
            cout << "No" << endl;
        }
    }
}