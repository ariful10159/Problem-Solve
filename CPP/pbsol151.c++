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


    int t=0;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,sum;
        int count1=0,count2=0,count3=0,count4=0;
        cin>>a;
        sum=a;
        string s = to_string(sum);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                continue;
            }
            else{
                count1++;
            }
        }
        cout<<count1<<endl;
        if(a>999)
        {

           b=a/1000;
           c=1000*b;
           a=a-c;

           cout<<c<<" ";

        }
        if(a>99)
        {
            d=a/100;
            e=100*d;
            a=a-e;

            cout<<e<<" ";

        }
        if(a>9)
        {
            f=a/10;
            g=10*f;
            a=a-g;

            cout<<g<<" ";
        }
        if(a<=9 && a>0)
        {

            cout<<a<<" ";
        }
        //cout<<c<<" "<<e<<" "<<g<<" "<<a<<" "<<endl;
        cout<<endl;
    }
}*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int al;
    int count = 0;
    int arr[n];
    int arr2[100];
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << arr[j] << " ";
                count++;
            }
            if (arr[i] == arr[j])
            {
                break;
            }
        }
    }
    cout << endl;
    // int j;
    // al = sizeof(arr[j])/sizeof(int);
    cout << count << endl;

    return 0;
}