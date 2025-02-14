/*#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();

    int n,diff=0,sum=0,count=0,total=0;
    cin>>n;
    vector<int >arr;
    
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());

    for(int i=1,j=0;i<arr.size();i++,j++)
    {
        diff = arr[i]-arr[j];
       cout<<"diff="<<diff<<endl;
      

        if(j==0)
        {
            sum=diff;
             cout<<"sum="<<sum<<endl;
            continue;
        }
        if(diff==sum)
        {
          count++;
        }
        else
        {
            total++;
        }
          cout<<"sum="<<sum<<endl;
        cout<<"count="<<count<<"total="<<total<<endl;
        
    }

}*/

#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();

    int n,even=0,odd=0,count=0,total=0;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
        if(k%2==0)
        {
           even++;
        }
        else
        {
            odd++;
        }

    }
    if(even>odd)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0)
            {
                count=i+1;
                cout<<count<<endl;
            }
        }
    }
    else
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                total=i+1;
                cout<<total<<endl;
            }
        }
    }

}
