/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void odddivisor(long long k)
{

    while (k--)
    {
        int n;
        cin >> n;
        for (int i = 3; i <= n; i += 2)
        {

            if (n % i == 0)
            {
                cout << "YES" << endl;

                break;
            }
        }
        cout << "No" << endl;
    }
}
int main()
{
    optimize();
    long long t;
    cin >> t;
    odddivisor(t);
}*/

/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int mx = 1000000;
vector<int> primes;
bool isprime[mx];

void primenumber(int n)
{
    for (int i = 3; i <= n; i += 2)
    {
        isprime[i] = 1;
    }
     int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isprime[i])
         {
        for (int j = i + i; j <= n; j += i)
        {
            isprime[j] = 0;
        }
        }
    }
    isprime[2] = 1;
    primes.push_back(2);
    for (int i = 3; i <= n; i++)
    {
        if (isprime[i] == 1)
            primes.push_back(i);
    }
}

int main()
{

    optimize();
    int lim = 1e5;
    

    primenumber(lim);

    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<=primes.size();i++)
        {
            if(n%primes[i]==0)
            {
                cout<<"yes"<<endl;
                break;
            }
        }
    }
}*/
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
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if((n&(n-1))==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}