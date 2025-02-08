// CPP program to illustrate
// gcd function of C++ STL
#include <iostream>
#include <algorithm> 
// #include<numeric> for C++17

using namespace std;

int main()
{

    int t,i;
    cin>>t;
    while(t--)
    {
        int a,b,GCD=0;
        cin>>a;
        for( i=1;i<a;i++)
        {
           GCD=__gcd(a,i);
           //cout<<"i="<<i<<"GCD=="<<GCD<<endl;
           if((GCD+i)==a)
           {
            break;
           }
        }
        cout<<i<<endl;
    }
	
}
