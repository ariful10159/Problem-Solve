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
    long int a;
    cin>>a;
    if(a>10000)
    {
        a=a%100;
        if(a%2==0)
        {
            cout<<"Mahmoud"<<endl;
        }
        else
        {
            cout<<"Ehab"<<endl;
        }
    }
    else
    {
        if(a%2==0)
        {
            cout<<"Mahmoud"<<endl;
        }
        else
        {
            cout<<"Ehab"<<endl;
        }
    }

}*/
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
    int a, c, f, temp;
    cout << "c to f , write 1 and f to c , write 2 " << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "enter c temperature = " << endl;
        cin >> c;
        temp = (c * 1.8) + 32;
        cout << "farenhite temperature = " << temp << endl;
    }
    else
    {
        cout<<"enter f temperature = "<<endl;
        cin>>f;
        temp= (f - 32)/1.8;
        cout<<"celcius temperature = "<<temp<<endl;
    }
}
