#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);*/
const int mx = 1e7 + 123;
int co[mx];

int main()
{

    //optimize();
    int lim = 10;
    //int count[mx];

    for (int i = 1; i <= lim; i++)
    {
        for (int j = i; j <= 10; j += i)
        {
            co[j]++;
        }
    }
   
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " :" << co[i] << endl;
    }
}
