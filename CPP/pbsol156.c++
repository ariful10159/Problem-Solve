#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);




int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count=0;
        cin>>s;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                count++;
                swap(s[i],s[i-1]);
                cout<<"YES"<<endl;
                cout<<s<<endl;
                

            }
        }
        if(count==0)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}